#include <bits/stdc++.h>
using namespace std;
const int maxN = 502;

int l, n;
bool mat[maxN][maxN];
bool v[maxN];

vector<int>vertices; // Funcionara como stack
int ans;

void dfs(int u)
{ 
    // Checar si todos los del stack le pertenecen
    for (int i=0;i<vertices.size();i++)
    {
        if (!mat[u][vertices[i]]) // No le pertenece
        {
            return;
        }
    }

    ans = max(ans, (int) vertices.size());

    v[u] = true;
    for (int i=0;i<n;i++)
    {  
        if (u != i && mat[u][i] && !v[i])
        {   
            vertices.push_back(i);
            dfs(i);
            vertices.pop_back();    
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>l>>n;
    /*
    vector<pair<int,int>>p;
    for (int i=0;i<n;i++)
    {
        int t,v;
        cin>>t>>v;
        p.push_back({t,v});
    }
    sort(p.begin(),p.end());

    for (int i=0;i<n;i++)mat[i][i] = true;

    // Hacer grafo con matriz de adyacencia
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (l/p[i].second + p[i].first > l/p[j].second + p[j].first)
            {
                mat[i][j] = true;
                mat[j][i] = true;
            }
        }
    }
    */

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    for (int i=0;i<n;i++)
    {
        if (!v[i])
        {
            vertices.clear();
            vertices.push_back(i);
            dfs(i);
        }
    }
    cout<<ans;


    return 0;
}