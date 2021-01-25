#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int n;
    cin>>n;
    int dp[(int)1e6 + 2];

    dp[1] = 1, dp[2] = 2, dp[3] = 4, dp[4] = 8, dp[5] = 16, dp[6] = 32;
    if (n > 6)
    {
        for (int i = 7; i <= n; i++)
        {
            dp[i] = 0;
            for (int j = 1; j <= 6; j++)
            {
                if (i - j > 0)
                {
                    dp[i] = (dp[i] % MOD + dp[i - j] % MOD) % MOD;
                }
            }
        }
    }
    cout<<dp[n];
    return 0;
}
