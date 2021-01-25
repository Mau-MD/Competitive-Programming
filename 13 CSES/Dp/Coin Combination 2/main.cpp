#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    int n,x;
    cin>>n>>x;
    int c[n];
    for (int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c, c +n);
    int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));

    for (int i=0;i<n;i++)
    {
        dp[0][c[i]] = 1;
        dp[i+1][c[i]] = 1;
    }

    for (int i=1;i<=x;i++)
    {
        int ans = 0;
        for (int j=0;j<n;j++) // Itero por todas las monedas
        {
            int index = i - c[j];
            if (index >= 0)
            {
                ans += dp[j + 1][index];
                if (ans >= MOD) ans -= MOD;
            }
            if (j + 1 > 1)dp[j + 1][i] = dp[j + 1][index] + dp[j][i] + dp[j + 1][i];
            else dp[j + 1][i] = dp[j + 1][index] + dp[j + 1][i];
        }
        dp[0][i] += ans;
    }

    /*
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=x;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
     */

    cout<<dp[0][x];
    return 0;
}