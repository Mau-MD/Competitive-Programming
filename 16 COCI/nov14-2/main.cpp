#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<ll,ll> pii;
const int maxN = 1e5 + 2;
/*
int ed(int a,int b)
{
    while (a > 1 && b > 1)
    {
        if (b > a)swap(a,b);
        a /= b;
    }
    return b;
}
 */

ll h[maxN];
vector<ll>adj[maxN];
priority_queue<pii>m;

bool v[maxN];
bool cort[maxN];

ll maxi = -1;

void dfs(int u)
{
    maxi = max(maxi,h[u]);
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        ll val = adj[u][i];
        if (!v[val] && !cort[val])
        {
            dfs(val);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>h[i];
        m.push({h[i],i});
    }
    for (int i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }


    ll ans = 0;
    while (!m.empty())
    {
        ll now = m.top().second;
        ll val = m.top().first;
        m.pop();
        cort[now] = true;

        // Checar si tiene mas de una conexion activa
        bool ok = false;
        for (int i=0;i<adj[now].size();i++)
        {
            int sig = adj[now][i];
            if (!cort[sig])ok = true;
        }

        memset(v,false,sizeof(v));
        if (ok)
        {
            // Ver todas las conexiones
            for (int i = 0; i < adj[now].size(); i++) // Cortar todas las conexiones
            {
                maxi = 0;
                if (!cort[adj[now][i]])
                {
                    dfs(adj[now][i]); // Buscar la maxima resistencia
                    ans += (val + maxi);
                }
            }
        }
    }
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
