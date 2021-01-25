#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int dp[(int) 1e6 + 2];
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    int coins[n];
    for (int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    sort(coins,coins + n);
    if (coins[0] > x)
    {
        cout<<-1;
        return 0;
    }
    for (int i=1;i<=x;i++)
    {
        int minn = INT_MAX;
        for (int j=0;j<n;j++) // Coins
        {
            int index = i - coins[j];
            if (index >= 0)
            {
                if (dp[index] == -1)continue;
                else minn = min(minn, 1 + dp[index]);
            }
        }
        if (minn == INT_MAX)dp[i] = -1;
        else dp[i] = minn;
    }

    cout<<dp[x];

    return 0;
}
