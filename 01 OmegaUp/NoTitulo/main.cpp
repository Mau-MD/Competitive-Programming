#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define MAX 10000000

bool primos[MAX];

ll criba(ll n)
{
    primos[0] = true;
    primos[1] = true;
    for (ll i=2;i*i<=n;i++)
    {
        if (primos[i])
        {
            for (ll j = 2 ;j * i< n; j++)
            {
                primos[i*j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;
    memset(primos,true,MAX);
    cin>>n>>m;
    criba(n+1);
    if (primos[n])cout<<"Si";
    else cout<<"No";


    return 0;
}
