#include <bits/stdc++.h>
using namespace std;
using ll = uint64_t;

ll rangos[1002][2];

ll sum(ll n)
{
    if (n%2 == 0)return (ll) (n/2) * (n+1);
    else return (ll) n * ((n+1)/2);
}

ll solve(ll n, ll a, ll i, ll j) // rango inicial rango final
{
    ll res = 0;
    for (int x=0;x<a;x++)
    {
       //cout<<rangos[x][0]<<" "<<rangos[x][1]<<endl;
        if (i == j)
        {
            if (i>=rangos[x][0] && j<= rangos[x][1])res += sum(i - rangos[x][0] + 1);
        }
        else if (rangos[x][0] < i && rangos[x][1] > i && rangos[x][1] <= j)res += (sum(rangos[x][1] - rangos[x][0] + 1) - sum(i - rangos[x][0]));
        else if (rangos[x][0] >= i && rangos[x][1] > j)res+= sum(j - rangos[x][0] + 1);
        else if (rangos[x][0] >= i && rangos[x][1] <= j) res +=  sum(rangos[x][1] - rangos[x][0] + 1);
        else if (rangos[x][0] < i && rangos[x][1] > j)res += sum(j - rangos[x][0] + 1) - sum(i - rangos[x][0]);
        else if (rangos[x][1] == i)res+= sum(rangos[x][1] - rangos[x][0] + 1);
    }
    return res;

}


int main()
{
    ll n,a,p;

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>a>>p;


    for (ll i=0;i<a;i++)
    {
        cin>>rangos[i][0]>>rangos[i][1];
    }
    ll x,y;
    for (ll i=0;i<p;i++)
    {
        cin>>x>>y;
        cout<<solve(n,a,x,y)%10000<<endl;

    }


    return 0;
}

