#include <bits/stdc++.h>
using namespace std;

double distancia(int x, int y)
{
    double res = (y * y) + (x * x);
    return sqrt(res);
}

void solve()
{
    int d,k;
    cin>>d>>k;

    int mov = 0;
    int x = 0, y = 0;
    double dist = 0.0;

    while(dist <= (d * d))
    {
        mov++;
        y += d;
        dist = distancia(x,y);

        if (dist > (d * d))break;

        mov++;
        x += d;
        dist = distancia(x,y);
    }

    if (mov % 2 != 0)cout<<"Utkarsh"<<endl;
    else cout<<"Ashish"<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
