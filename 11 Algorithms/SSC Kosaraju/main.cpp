#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 2;

vector<int>adj[maxN]; // Para guardarlo normal
vector<int>r[maxN]; // Para guardarlo volteado
vector<bool> v; // Para guardar lo visitado
vector<int>topo; // Para guardar el oraden de salida
vector<int>component; // Para guardar el componente actual

void dfs1(int u) // Topo
{
    v[u] = true;
    for (int i=0;i<adj[u].size();i++){
        int val = adj[u][i];
        if (!v[val])dfs1(val);
    }
    topo.push_back(u);
}

void dfs2(int u) // Usamos el reverse graph
{
    v[u] = true;
    component.push_back(u);
    for (int i=0;i<r[u].size();i++)
    {
        int val = r[u][i];
        if (!v[val])dfs2(val);
    }
}

int main()
{
    int n; // Numero de vertices
    cin>>n;
    int m; // Numero de aristas
    cin>>m;

    for (int i=0;i<m;i++) // Iteramos por las aristas
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        r[b-1].push_back(a-1);
    }

    v.assign(n,0); // Ponemos todos como false

    for (int i=0;i<n;i++)
    {
        if (!v[i])dfs1(i); // Hacemos el primer dfs
    }

    v.assign(n,0); // Reiniciamos el visited

    for (int i=0;i<n;i++)
    {
        if (!v[i])
        {
            component.clear();
            dfs2(i);
            for (auto x:component)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}