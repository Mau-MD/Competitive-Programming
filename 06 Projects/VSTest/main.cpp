#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5 + 2;
int cnt;

bool v;

void dfs(int init, int u, vector<int>adj[])
{
    if (v && u == init)return;
    v = true;
    cnt++;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        dfs(init,val,adj);
    }
}

void solve()
{
    int n;
    cin>>n;
    cnt = 0;

    vector<int>adj[maxN];

    for (int i=0;i<n;i++)
    {
        int a,b; cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }

    for (int i=0;i<n;i++)
    {
        v = false;
        dfs(i,i,adj);
    }
    cout<<cnt / 2<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}