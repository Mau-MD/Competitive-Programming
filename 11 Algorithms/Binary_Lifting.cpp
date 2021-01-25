// Solution to Sloth Naptime Codeforces 102694 C

#include <bits/stdc++.h>
using namespace std;

const int maxN = 1005;

int depth[maxN];
int dp[maxN][maxN]; // Node 2^k

vector<int>adj[maxN];

int n;

void dfs(int u, int p) // node u node parent
{
    if (u != p)
    {
        depth[u] = depth[p] + 1;
        dp[u][0] = p;
        for (int i=0;i<log(n);i++)
        {
            dp[u][i] = dp[dp[u][i-1]][i-1]; 
        }
    }
    else
    {
        depth[u] = 1;
    }

    for (int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if (v == p)continue;
        dfs(v,u);
    }    

}

int lca(int u, int v)
{
    // moverse diferencia de depths
    if (depth[u] < depth[v])swap(u,v);

    int diff = depth[u] - depth[v];
    
    for (int i=0;i<log(n);i++)
    {
        if (diff & (1 << i))
        {
            u = dp[u][i];
        }
    }
    // ya son iguales
    if (u == v)return u; // lca found

    // bianry search
    for (int i=log(n)-1; i>=0; i--)
    {
        if (dp[u][i] != dp[v][i]) // no overlap
        {
            // dar el salto
            u = dp[u][i];
            v = dp[v][i];
        }
    }
    return dp[u][0];
}


int main()
{
    cin>>n;
    int u,v;

    for (int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //precalcular todo
    // u conecta a v entonces u es parent de v
    memset(dp,-1,sizeof(dp));
    dfs(u,u);
    cout<<"HOLA";
    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
       int a,b,e;
       cin>>a>>b>>e;
       int pNode = lca(a,b);  // longitud maxima entre los dos nodos
       cout<<pNode<<endl;
       int length = depth[a] + depth[b] - (2 * depth[pNode]);
       if (e > length) // si se puede
       {
           cout<<b<<endl;
           continue;
       }
       int aLengthToLCA = depth[a] - depth[pNode];
       int bLengthToLCA = depth[b] - depth[pNode];
       int walk;
       if (e == aLengthToLCA) // cae en el LCA
       {
           cout<<pNode<<endl;
           continue;
       }
       if (e < aLengthToLCA) // mover
       {
           walk = e;
           for (int j=1;j<=log(n);j++)
           {
               if (walk & (1 << i)) // Si esta prendido entonces caminar
               {
                   a = dp[a][j];
               }
           }
           cout<<a<<endl;
       }
       else
       {
           walk = bLengthToLCA - (e - aLengthToLCA);
           for (int j=1;i<=log(n);j++)
           {
               if (walk & (1 << i))
               {
                   b = dp[b][j];
               }
           }
           cout<<b<<endl;
       }
    
    }

    return 0;
}