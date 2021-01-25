#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int,int> pii;
const ll MOD = 1000000007;
ll n,m,k;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k;
    if (k == 1)
    {
        ll ans = 1;
        for (int i=1;i<=n;i++)
        {
            ans = ans * m;
            ans %= MOD;
        }
        cout<<ans<<endl;
    }
    else if (k % 2 == 0)
    {
        cout<<m<<endl;
    }
    else if (k == n)
    {
        ll ans = 1;
        for (int i=1;i<=n/2+1;i++)
        {
            ans = ans * m;
            ans %= MOD;
        }
        cout<<ans<<endl;
    }
    else if (k % 2 == 1)
    {
        cout<<((m % MOD) * (m % MOD) % MOD)<<endl;
    }
    else
    {

    }

    return 0;
}
