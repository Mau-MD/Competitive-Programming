//Solution to Codeforces 208 E

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 2;
const int LN = 16;
int n;
vector<int>adj[maxN];
set<int>hasNodes;
int depth[maxN];
int dp[maxN][LN];
bool visited[maxN];

void dfs(int u, int p)
{
    visited[u] = true; // Para no repetir el dfs en otros arboles

    if (u != p) // Esto es solo para la inicializacion. Evitar que se hagan cousas out-of-bounds
    {
        depth[u] = depth[p] + 1; // Aumentamos depth actual
        dp[u][0] = p; // Si hacemos un salto de 2^0 en el nodo u, vamos a terminar en p
        for (int i=1;i<=LN;i++)
        {
            dp[u][i] = dp[dp[u][i-1]][i-1]; // Asiganmos los saltos
        }
    }
    else
    {
        depth[u] = 1; 
    }

    for (int i=0;i<adj[u].size();i++) // Iteramos por los siguientes nodos y repetimos
    {
        int v = adj[u][i];
        if (p == v)continue;
        dfs(v,u);
    }
}


int solve(int u, int k) // Nodo n, ancestro k
{
    int ans = 0;

    int nDepth = depth[u]; // Calculamos el depth actual de n
    if (nDepth == 1)return 0; // Si es la raiz, entonces regresamos 0

    // Calculamos el ancestro de n
    int nAncester = u;
    for (int i=0;i<LN;i++) 
    {
        if (k & (1<<i)) // Si el bit esta encendido
        {
            nAncester = dp[nAncester][i];
        }
    }
    


    for (int i=1;i<n;i++) // Iteramos por todos los nodos hasta encontrar uno que tenga el mismo depth
    {
        if (u != i && depth[i] == nDepth) // Una vez encontrado, verificamos si al caminar k veces da el mismo ancestro
        {
            int potentialNode = i;
            // Esto caminara el nodo encontrado
            for (int j=0;j<LN;j++)
            {
                if (k & (1<<j)) // Si el bit esta encendido
                {
                    potentialNode = dp[potentialNode][j];
                }
            }

            // Comparamos ancestros
            if (potentialNode == nAncester) // Tenemos una respuesta
            {
                ans++;
            }

        }
    }    

    return ans;

}

int main()
{    
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int dato;
        cin>>dato; // Dato es lo mismo a ser el parent
        if (dato == 0)continue;
        adj[dato].push_back(i);
        adj[i].push_back(dato);
        hasNodes.insert(dato);
        hasNodes.insert(i);
    }

    for (int i=1;i<=n;i++) // Dfs on all nodes
    {
        if (hasNodes.count(i) && !visited[i])
        {
            dfs(i,i);
        }
    }

    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        int u,k;
        cin>>u>>k;
        if (!hasNodes.count(u))cout<<"0 ";
        cout<<solve(u,k)<<" ";
    }

    return 0;
}