#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const int maxN = 500002;
vector<int>adj[maxN];
int dulces[maxN];
bool pd[maxN], v[maxN];
int ans;

void dfs(int u, int d) // Nodo acutal, dulces actual
{
    if (pd[u])ans = max(ans, d);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    for (int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        dulces[i] = d;
    }

    int s,p;
    cin>>s>>p;
    for (int i=0;i<p;i++)
    {
        int d; cin>>d;
        pd[d-1] = true;
    }
    dfs(s-1,0);
    // Siempre se inicia con s
    return 0;
}
