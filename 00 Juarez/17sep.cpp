#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


int main()
{
    int n;
    cin>>n;
    ll dp[n];
    dp[0] = 1;
    dp[1] = 1;
    for (int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n];
    return 0;
}