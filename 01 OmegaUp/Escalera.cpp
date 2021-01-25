#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    for (int i=2;i<=n;i++)
    {
        if (i <= k)dp[i]++;
        for (int j=0;j<k;j++)
        {
            if (i - (j+1) >= 0)dp[i] += dp[i-(j+1)];
        }
    }
    cout<<dp[n];

    return 0;
}