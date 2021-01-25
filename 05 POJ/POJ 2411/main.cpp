#include <iostream>
using namespace std;
int dp[14][14];
int n,m;

void solve()
{
    for (int i=1;i<=11;i++)
    {
        for (int j=1;j<=11;j++)
        {
            if (i == 1)
            {
                if (j % 2 != 0)dp[i][j] = dp[i][j-1];
                else
                {
                    dp[i][j] = j / 2;
                }
            }
            else if (j == 1)
            {
                if (i % 2 != 0)dp[i][j] = dp[i-1][j];
                else
                {
                    dp[i][j] = i / 2;
                }
            }
            else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
}

int main()
{
    solve();
    for (int i=1;i<=11;i++)
    {
        for (int j=1;j<=11;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
