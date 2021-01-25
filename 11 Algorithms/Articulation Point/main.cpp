#include <bits/stdc++.h>
using namespace std;

const int maxN = 3002;

vector<int>adj[maxN];
int low[maxN], disc[maxN], parent[maxN];
bool v[maxN], ap[maxN];
int tim;

void init()
{
    tim = 0;
    for (int i=0;i<maxN;i++)
    {
        v[i] = ap[i] = false;
        adj[i].clear();
        parent[i] = -1;
        low[i] = disc[i] = 0;
    }
}

void dfs(int u)
{
    v[u] = true;
    disc[u] = low[u] = tim + 1;
    tim++;
    int child = 0;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])
        {
            parent[val] = u;
            child++;
            dfs(val);

            if (parent[u] == -1 && child > 1)ap[u] = true;
            if (parent[u] != -1 && low[val] >= disc[u])ap[u] = true;
        }
        else if (parent[u] != val)
        {
            low[u] = min(low[u],disc[val]);
        }
    }
}

void solve()
{
    init();
    int n,m,k;
    cin>>n>>m>>k;
    bool ok = false;
    int first;
    for (int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if (!ok)
        {
            first = a;
            ok = true;
        }
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(first);
    int count = 0;
    for (int i=0;i<maxN;i++)
    {
        if (ap[i])count++;
    }
    cout<<count*k<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}