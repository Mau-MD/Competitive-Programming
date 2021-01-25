#include <bits/stdc++.h>
using namespace std;
#define MAX 102
int n, dp[MAX];
int ans[MAX];

int solve()
{
    dp[0] = ans[0];
    for (int i=1;i<n;i++)
    {
        int y = i-1;
    }

    return dp[n-1];
}

int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>ans[MAX];
    }

    cout<<solve();
    return 0;
}
