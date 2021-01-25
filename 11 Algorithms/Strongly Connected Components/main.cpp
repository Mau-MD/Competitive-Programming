
#include <bits/stdc++.h>
using namespace std;

const int maxN = 17;

int n,m, tim;
vector<int>adj[maxN], s;
int disc[maxN], low[maxN];
bool v[maxN];

void init()
{
    tim = 0;
    for (int i=0;i<maxN;i++)
    {
        adj[i].clear();
        disc[i] = low[i] = -1;
        v[i] = false;
    }
}
int par = 0, impar = 0;

void dfs(int u)
{
    disc[u] = low[u] = ++tim;
    v[u] = true;
    s.push_back(u);
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (disc[val] == -1)
        {
            dfs(val);
        }
        if (v[val]) // Ya visitado
        {
            low[u] = min(low[u], low[val]);
        }
    }

    int nodes = 0;
    if (low[u] == disc[u]) // Estoy en raiz de subtree
    {
        while (true)
        {
            int front = s.back(); s.pop_back(); v[front] = false;
            nodes++;
            if (front == u)
            {
                if (nodes % 2 == 0)par+= nodes;
                else impar += nodes;
                break;
            }
        }

    }
}

int main()
{
    init();
    cin >> n >> m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1); // Directed
    }

    par = impar = 0;
    for (int i=0;i<n;i++)
    {
        if (disc[i] == -1)
        {
            dfs(i);
        }
    }
    cout<<impar - par;

    return 0;
}
