#include <iostream>
using namespace std;
using ll = long long int;
const ll MOD = 1000000000;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    ll dp[n][m];
    dp[0][0] = 0;
    for (int i=1;i<m;i++)
    {
        dp[0][i] = i;
    }
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (j == 0)dp[i][j] = dp[i-1][0]+1;
            else dp[i][j] = ((dp[i-1][j] % MOD) + (dp[i][j-1] % MOD) + 2) % MOD;
        }
    }
    cout<<(dp[n-1][m-1] + 1) % MOD;
    return 0;
}
