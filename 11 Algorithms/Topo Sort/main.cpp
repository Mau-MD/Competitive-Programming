#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 2;

vector<int>adj[maxN];
vector<int> topo;
bool v[maxN];

void dfs(int u)
{
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])
        {
            dfs(val);
        }
    }
    topo.push_back(u);
}

int main()
{
    int n, m;
    cin>>n>>m;

    while (m--)
    {
        int x,y;
        cin>>x>>y;
        adj[x-1].push_back(y-1);
    }

    for (int i=0;i<n;i++)
    {
        if (!v[i])
        {
            dfs(i);
        }
    }


    reverse(topo.begin(),topo.end());
    // Como checar si el topo es valido
    int ind[maxN];
    for (int i=0;i<n;i++)
    {
        ind[topo[i]] = i;
    }

    for (int i=0;i<n;i++)
    {
        for (int j : adj[i])
        {
            if (ind[j] <= ind[i])
            {
               // cout<<i<<" "<<j;
                cout<<"IMPOSSIBLE";
                return 0;
            }
        }
    }
    for (auto x:topo)cout<<x+1<<" ";
    return 0;
}
