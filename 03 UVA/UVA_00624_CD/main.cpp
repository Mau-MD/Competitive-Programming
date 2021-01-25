#include <bits/stdc++.h>

#define MAX 1002
using namespace std;
int g, n;
int a[MAX];
int dp[MAX][MAX];

void bt(int i, int j)
{
    if (i == 0)return;
    if (dp[i-1][j] == dp[i][j])bt(i-1,j);
    else
    {
        bt(i-1,j-a[i-1]);
        cout<<a[i-1]<<" ";
    }
}
int solve()
{
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=g;j++)
        {
            if (i==0 || j == 0)dp[i][j] = 0;
            else
            {
                if (j >= a[i-1])dp[i][j] = max(dp[i-1][j], a[i-1] +  dp[i-1][j-a[i-1]]);
                else dp[i][j] = dp[i-1][j];
            }
        }
    }
    bt(n,g);
    cout<<"sum: "<<dp[n][g]<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> g >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve();
    }
    return 0;
}
