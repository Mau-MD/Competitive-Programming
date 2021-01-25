#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e4 + 2;
int n,m;

vector<int>adj[maxN];
int parent[maxN], low[maxN], disc[maxN], tim;
bool v[maxN];
set<pair<int,int>>bridges;

void init()
{
    bridges.clear();
    tim = 0;
    for (int i=0;i<maxN;i++)
    {
        parent[i] = -1;
        low[i] = disc[i] = 0;
        adj[i].clear();
        v[i] = false;
    }
}

void dfs(int u)
{
    low[u] = disc[u] = tim++;
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])
        {
            parent[val] = u;
            dfs(val);

            low[u] = min(low[u], low[val]);
            if (low[val] > disc[u]) // Bridge
            {
                if (u > val)bridges.insert({val,u});
                else bridges.insert({u, val});
            }
        }
        else if (parent[u] != val)
        {
            low[u] = min(low[u], disc[val]);
        }
    }
}

void solve(int t)
{
    init();
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    dfs(0);
    cout<<"Caso #"<<t<<endl;
    if (!bridges.empty())
    {
        cout<<bridges.size()<<endl;
        for (auto s:bridges)
        {
            cout << s.first + 1 << " " << s.second + 1 << endl;
        }
    }
    else cout<<"Sin bloqueos"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, j = 0;
    cin>>t;
    while(t--)
    {
        solve(++j);
    }

    return 0;
}
