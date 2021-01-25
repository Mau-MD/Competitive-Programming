#include <bits/stdc++.h>
using namespace std;
#define MAX 102
int mat[MAX][MAX];
int dp[MAX][MAX];
int n,m;

int solve()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (mat[i][j] == 2)continue;
            if (i == 0 && j == 0)dp[i][j] = mat[i][j];
            else if (i == 0)
            {
                if (mat[i][j-1] == 2)mat[i][j] = 2;
                else dp[i][j] = dp[i][j-1] + mat[i][j];

            }
            else if (j == 0)
            {
                if (mat[i-1][j] == 2)mat[i][j] = 2;
                else dp[i][j] = dp[i-1][j] + mat[i][j];
            }
            else
            {
                if (mat[i-1][j] == 2 && mat[i][j-1] == 2 )
                {
                    mat[i][j] = 2;
                }
                else if (mat[i-1][j] == 2)dp[i][j] = dp[i][j-1] + mat[i][j];
                else if (mat[i][j-1] == 2)dp[i][j] = dp[i-1][j] + mat[i][j];
                else dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + mat[i][j];
            }
        }
    }
    return dp[n-1][m-1];
}

int main()
{
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }


    cout<<solve()<<endl;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
