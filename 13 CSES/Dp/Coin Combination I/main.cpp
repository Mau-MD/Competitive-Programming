#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    cin>>n>>x;
    int c[n];
    int dp[(int)1e6 +2 ];

    for (int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    memset(dp,0,sizeof(dp));
    for (int i=0;i<n;i++)
    {
        dp[c[i]] = 1;
    }
    for (int i=1;i<=x;i++)
    {
        for (int j=0;j<n;j++)
        {
            int index = i - c[j];
            if (index >= 0) dp[i] += dp[index];
            if (dp[i] >= MOD)dp[i] -= MOD;
        }
    }

    cout<<dp[x];
    return 0;
}
