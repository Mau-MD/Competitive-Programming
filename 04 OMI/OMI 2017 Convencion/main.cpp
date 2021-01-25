#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000002;

int n,m;
//vector<int>adj[maxN];
int ans =0;
map<int, vector<int>>adjj;
bitset<maxN>base;
bitset<maxN>encontrados, coincidencias;

void dfs(int nodo, int size) // Nodo que tengo que encontrar
{
    encontrados.reset();
    coincidencias.reset();
    bool flag1 = false, flag2 = false;
    if (size==1)flag2 = true;
    for (int i=0;i<adjj[nodo].size();i++)
    {
        encontrados[adjj[nodo][i]] = true;
        if (adjj[nodo][i] == nodo+1)flag1 = true;
    }
    coincidencias = encontrados & base;
    if (coincidencias.count() == base.count())flag2 = true; // Todas las coincidencias

    if (flag1 && flag2)
    {
        base[nodo] = true;
        ans = max(size,ans);
        dfs(nodo+1, size+1);
    }
    else if (flag2)
    {
        ans = max(size,ans);
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    set<int>hayNodo;
    for (int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjj[x].push_back(y);
        adjj[y].push_back(x);
        hayNodo.insert(x);
        hayNodo.insert(y);
    }

    for (auto x:hayNodo)
    {
        base[x] = true;
        base.reset();
        dfs(x,1);
    }
    cout<<ans;
    return 0;
}
