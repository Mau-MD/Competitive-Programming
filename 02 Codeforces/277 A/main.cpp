#include <bits/stdc++.h>
using namespace std;
const int maxN  = 204;

vector<int>adj[maxN];
bool v[maxN];
bool e[maxN];
int cc;

void dfs(int u)
{
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])dfs(val);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    bool ok = false;
    for (int i=0;i<n;i++)
    {
        int p; cin>>p;
        if (p != 0)ok = true;
        e[m+i+1] = true;
        while (p--)
        {
            int d; cin>>d;
            adj[m + i + 1].push_back(d);
            adj[d].push_back(m + i + 1);
            e[d] = true;
        }
    }
    if (!ok)
    {
        cout<<n<<endl;
        return 0;
    }
    for (int i=1;i<=n+m;i++)
    {
        if (!v[i] && e[i])
        {
            cc++;
            dfs(i);
        }
    }
    cout<<cc-1<<endl;
    return 0;
}
