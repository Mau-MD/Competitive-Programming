#include <bits/stdc++.h>
using namespace std;
int n, m,a, b;
const int maxn = 1002;
int memo[maxn];

int solve(int x)
{
    if (memo[x] != -1)return memo[x];
    if (x <= 0)return 0;
    else
    {
        return memo[x] = min(a + solve(x-1), b + solve(x-m));
    }
}

int main()
{
    for (int i=0;i<1002;i++)
    {
        memo[i] = -1;
    }
    cin >> n >> m >> a >> b;
    if (n == 1)cout<<min(a,b);
    else
    {
        cout<<solve(n);
    }
    return 0;
}
