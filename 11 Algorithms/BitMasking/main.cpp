#include <bits/stdc++.h>
const int maxN = 52;
int n;
int price[maxN][maxN]; // Person i, task j
int dp[maxN][maxN];

int solve(int actual, int mask)
{
    int res = INT_MAX;
    if(mask == 0)
    {
        return 0;
    }
    for (int i=0;i<n;i++) // Tasks
    {
        if ((mask & (1 << i))) // Esta prendido
        {
            res = min(res, price[actual][i] + solve(actual + 1, mask ^ (1 << i))); // Prendo el bit
        }
    }
    return dp[actual][mask] = res;
}

int main()
{

    cin>>n; // N persons and tasks
    memset(dp,-1,sizeof(dp));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>price[i][j];
        }
    }

    cout<<solve(0,(1<<n) - 1);
    return 0;
}
