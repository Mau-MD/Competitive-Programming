#include <bits/stdc++.h>
using namespace std;
#define maxN 1000002
#define ll long long int
int main()
{
    map<ll,ll>solve;

    int n;
    cin>>n;
    ll a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        solve[a[i]]++;
    }


    ll dp[maxN];
    dp[0] = 0;
    dp[1] = solve[1] * 1;
    dp[2] = max(solve[2] * 2, dp[1]);

    for (int i=3;i<maxN;i++)
    {
        dp[i] = max(dp[i-1], dp[i-2] + solve[i] * i);

    }
    cout<<dp[maxN-1];

    return 0;
}