#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long int;

int n;
vector<ar<ll,3>>c;
ll dp[20][1 << 18];

ll d(int node, int next)
{
    return abs(c[node][0] - c[next][0]) + abs(c[node][1] - c[next][1]) + max(0LL,c[next][2] - c[node][2]);
}

ll solve(int node, int mask)
{
    if (dp[node][mask] != -1)return dp[node][mask];
    ll res = LONG_LONG_MAX;
    if (mask == 0)return d(node,0);
    for (int i=0;i<n;i++)
    {
        if (mask & (1 << i)) // La voy apagando
        {
            res = min(res, d(node, i) + solve (i, mask ^ (1 << i)));
        }
    }
    return dp[node][mask] = res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    memset(dp,-1,sizeof(dp));
    for (int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        c.push_back({x,y,z});
    }
    cout<<solve(0,(1<<n)-2);
    return 0;
}
