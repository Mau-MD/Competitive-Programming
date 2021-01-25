#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll maxN = 1e5 + 2;
const ll EPS = 2 * 1E9;
ll n,k;
ll a[maxN];

bool can(ll buscar)
{
    ll operations = 0;
    for (ll i=(n-1)/2;i<n;i++)
    {
        operations += max(buscar - a[i], 0LL);
    }
    if (operations <= k)return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    ll pos = 0;
    for (ll x = EPS; x>=1;x/=2)
    {
        while(can(pos +  x))pos+=x;
    }
    cout<<pos<<endl;

    return 0;
}
