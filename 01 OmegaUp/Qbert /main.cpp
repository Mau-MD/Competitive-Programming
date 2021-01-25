#include <iostream>
using namespace std;
int n;
int res = 9999;
void solve(int pasos, int cero[], int s, int x, int y)
{
    if (x < 0 && y < 0 && x > y && y > n)return;
    bool flag = true;
    for (int i=0;i<s;i++)
    {
        if (cero[i] != 0)flag = false;
    }
    if (flag)
    {
        res = min(res,pasos);
    }
    else
    {
        int ind = ((y * (y+1))/2) + x;
        cero[ind]--;
        if (cero[ind] < 0)cero[ind] = 0;
        solve(pasos+1, cero, s, y+1,x);
        solve(pasos+1,cero,s,y+1,x+1);
        solve(pasos+1,cero,s,y-1,x);
        solve(pasos+1,cero,s,y-1,x-1);
    }
}


int main()
{
    cin>>n;
    int cero[(n*(n+1)/2)];
    for (int i=0;i<(n*(n+1))/2;i++)
    {
        cin>>cero[i];
    }
    solve(0,cero,(n*(n+1)/2),0,0);
    cout<<res;
    return 0;
}
