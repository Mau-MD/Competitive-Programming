#include <bits/stdc++.h>
using namespace std;
const int maxN = 50002;

vector<int>adj[maxN], s;
int low[maxN], disc[maxN];
bool v[maxN];
int tim;
int dp[maxN];

void init()
{
    tim = 0;
    for (int i=0;i<maxN;i++)
    {
        adj[i].clear();
        dp[i] = low[i] = 0;
        disc[i] = -1;
        v[i] = false;
    }
}

void ssc(int u)
{
    low[u] = disc[u] = ++tim;
    v[u] = true;
    s.push_back(u);
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (disc[val] == -1) // No visitada
        {
            ssc(val);
        }
        if (v[val]) // Visitada
        {
            low[u] = min(low[u], low[val]);
        }
    }

    if (disc[u] == low[u]) // Root
    {
        int now = s.size() - 1;
        int size = 0;
        while (s[now] != u)size++, now--;
        while (true)
        {
            int front = s.back(); s.pop_back(); v[front] = false;
            dp[front] = size + 1;
            if (front == u)break;
        }

    }
}

int cnt = 0;
void dfs(int u)
{
    if (dp[u] > 1)
    {
        cnt=dp[u];
        return;
    }
    cnt++;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        dfs(val);
        cnt++;
        dp[u] = max(dp[u], cnt);
    }
}

void solve(int t)
{
    init();
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
    }

    // Busco primero ssc
    for (int i=0;i<n;i++)
    {
        if (disc[i] == -1)ssc(i);
    }

    for (int i=0;i<n;i++)
    {
        if (dp[i] == 1)dfs(i);
    }
    int ans = -1, maxx = -1;
    for (int i=0;i<n;i++)
    {
        if (dp[i] > maxx)
        {
            maxx = dp[i];
            ans = i;
        }
    }
    cout<<"Case "<<t<<": "<<ans+1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int j = 0;
    while(t--)
    {
        solve(++j);
    }
    return 0;
}
