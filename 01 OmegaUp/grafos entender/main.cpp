#include <bits/stdc++.h>
using namespace std;

void agregarNodo(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int V=5;
    int n,m,u,v;
    cin>>n>>m;
    int valores[n];
    for (int i=0;i<n;i++)
    {
        cin>>valores[i];
    }


    vector<int> adj[V];

    for (int i=1;i<n;i++)
    {
        cin>>u>>v;
        agregarNodo(adj,u,v);
    }

    return 0;
}