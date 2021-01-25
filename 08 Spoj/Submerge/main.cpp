#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e4 + 2;

vector<int>adj[maxN];
int parent[maxN], low[maxN], disc[maxN];
bool v[maxN], ap[maxN];
int n,m, tim;


void init()
{
    tim = 0;
    for (int i=0;i<maxN;i++)
    {
        adj[i].clear();
        parent[i] = -1;
        low[i] = disc[i] = 0;
        v[i] = ap[i] = false;
    }
}

void dfs(int u)
{
    low[u] = disc[u] = tim++;
    int children = 0;
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])
        {
            parent[val] = u;
            children++;
            dfs(val);

            low[u] = min(low[u], low[val]);
            if (parent[u] == -1 && children > 1)ap[u] = true;
            if (parent[u] != -1 && low[val] >= disc[u])ap[u] = true;
        }
        else if (parent[u] != val)
        {
            low[u] = min(low[u], disc[val]);
        }
    }
}

void solve()
{
    init();
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    dfs(0);
    int ans = 0;
    for (int i=0;i<maxN;i++)
    {
        if (ap[i])
        {
           // cout<<i<<" ";
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    n = 1, m = 1;
    while (n != 0 && m != 0)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)break;
        solve();
    }
    return 0;
}
