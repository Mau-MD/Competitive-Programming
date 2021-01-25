#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1000000007;

int x,k,d;
ll ways;
ll dp[102][2];

ll solve(int sum, bool ok)
{

    if (sum >= 0 && dp[sum][ok] != -1)return dp[sum][ok];
    ll ans = 0;
   // cout<<"sum: "<<sum<<endl;
    bool wasOk = ok;
    if (sum == 0)
    {
        if (ok)
        {
    //        cout<<"ok "<<endl;
            return 1LL;
        }
        else return 0LL;
    }
    else if (sum <0)return 0LL;
    for (int i=1;i<=k;i++)
    {
        if (!ok && i>= d && sum - i >= 0)ok = true;
        ans += solve(sum - i, ok);
        if (ans >= MOD)ans -= MOD;
    }
    return dp[sum][wasOk] = ans;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    ways = 0;
    cin>>x>>k>>d;
   cout<<solve(x,false);

    return 0;
}
