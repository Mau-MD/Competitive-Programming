#include <bits/stdc++.h>
using namespace std;

int n;
int trian[102][102];
int dp[102][102];


int solve()
{
    dp[0][0] = trian[0][0];
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<=n;j++)
        {
            if (trian[i][j] == -1)continue;
            if (j == 0)dp[i][j] = dp[i-1][j] + trian[i][j];
            else if (j == i)dp[i][j] = dp[i-1][j-1] + trian[i][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + trian[i][j];
        }
    }

    int maxx = 0;
    for (int i=0;i<n;i++)
    {
        maxx = max(maxx, dp[n-1][i]);
    }
    return maxx;
}


int main()
{
    memset(trian,-1, sizeof(trian));
    cin>>n;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            cin>>trian[i][j];
        }
    }
    cout<<solve();

    return 0;
}
