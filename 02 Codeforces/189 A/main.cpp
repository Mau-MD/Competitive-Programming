#include <iostream>
using namespace std;
int x,a,b,c;
int dp[4002];

int solve(int n)
{
    if (n == 0)return 0;
    if (dp[n] != -1)return dp[n];
    int res = -9999;
    if (n>=a) res = max(res, 1 + solve(n-a));
    if (n>=b) res = max(res, 1 + solve(n-b));
    if (n>=c) res = max(res, 1 + solve(n-c));
    return dp[n] = res;

}

int main()
{
    for (int i=0;i<4002;i++)
    {
        dp[i] = -1;
    }
    cin>>x>>a>>b>>c;
    cout<<solve(x);
    return 0;
}
