#include <bits/stdc++.h>

using namespace std;
#define MAX 1000002
long int a[MAX];
long int n, m;
long int dp[MAX];

long int solve()
{
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0)dp[i] = MAX + 10;
        else
        {
            if (i-m == -1)dp[i] = 1;
            else if (i-m > -1)dp[i] = min(dp[i-m] + 1, dp[i-1] + 1);
            else dp[i] = dp[i-1] + 1;
        }
        cout<<dp[i]<<" ";
    }
    return dp[n - 1];
}


bool posible()
{
    long cuenta = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)cuenta = 0;
        else cuenta++;
        if (cuenta >= m)return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, MAX);
    string t;
    cin >> n >> m;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        a[i] = t[i] - 48;
    }
    if (!posible())
    {
        cout << "-1";
        return 0;
    }
    int r = solve();
    cout << r;


    return 0;
}
