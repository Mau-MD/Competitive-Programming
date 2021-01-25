#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000002;

int n;
bitset<maxN> vLocal; // bitset

int ans = 0;
int tamanoCiclo;
int encontrado;
bool ciclo = false;

void dfs(int nodo, int vGeneral[], int adj[], unordered_map<int,int>indicesPasos)
{
    if (vGeneral[nodo] != -1)
    {
        return;
    }
    if (vLocal[nodo])
    {
        ciclo = true;
        encontrado = nodo;
        tamanoCiclo =  ans - indicesPasos[nodo];
        return; // Ciclo
    }
    vLocal[nodo] = true;
    ans++;
    indicesPasos[nodo] = ans;

    dfs(adj[nodo-1], vGeneral,adj, indicesPasos);
    if (!ciclo)
    {
        vGeneral[nodo] = vGeneral[adj[nodo-1]] + 1;
    }
    else  // Si hay ciclo
    {
        vGeneral[nodo] = tamanoCiclo;
        if (nodo == encontrado)ciclo = false;
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;

    int adj[n];
    for (int i=0;i<n;i++)
    {
        cin>>adj[i];
    }

    int vGeneral[n+1];
    memset(vGeneral,-1,sizeof(vGeneral));
    for (int i=1;i<=n;i++) // dfs por todos los nodos
    {
        if (vGeneral[i] == -1)
        {
            unordered_map<int,int>indicesPasos;
            dfs(i,vGeneral,adj,indicesPasos);
        }
    }
    int fans = -1;
    for (int i=1;i<=n;i++)
    {
        fans = max(fans, vGeneral[i] + 1);
    }


    /*
    for (int i=1;i<=n;i++)
    {
        cout<<vGeneral[i]<<" ";
    }
    cout<<endl;
    */

    cout<<fans;

    return 0;
}
