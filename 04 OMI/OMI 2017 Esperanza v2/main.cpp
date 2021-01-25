#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
typedef pair<int,int> pii;
const int p = 9001;

ll toNumber(int a, int b)
{
    ll res = a;
    res *= p;
    res *= b;
    res*=p;
    return res;
}



int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    set<ll>coord;
    int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};

    int x = n,y = n;
    for (int i=0;i<n;i++)
    {
        ll num = toNumber(x,y);
        coord.insert(num);
        if (a[i] == 'U') // Arriba
        {
            y++;
        }
        else if (a[i] == 'L') //Izquierda
        {
            x--;
        }
        else if (a[i] == 'D') // Abajo
        {
            y--;
        }
        else if (a[i] == 'R') // Derecha
        {
            x++;
        }
        num = toNumber(x,y);
        if (coord.count(num))
        {
            cout<<"N";
            return 0;
        }
        int occ = 0;
        for (int j=0;j<4;j++)
        {
            int ax = x + dx[j];
            int ay = y + dy[j];
            num = toNumber(ax,ay);
            if (coord.count(num))occ++;
            if (occ > 1)
            {
                cout<<"N";
                return 0;
            }
        }
    }
    cout<<"S";
    return 0;
}
