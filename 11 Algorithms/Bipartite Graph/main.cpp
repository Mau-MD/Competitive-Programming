#include <bits/stdc++.h>
const int maxN = 202;
vector<int>adj[maxN];
bool v[maxN];

bool bfs(int u)
{
    queue<int>Cola;
    int color[maxN];
    memset(color,-1,sizeof(color));
    Cola.push(u);
    color[u] = 0;
    while(!Cola.empty())
    {
        int now = Cola.front();
        Cola.pop();
        if (v[now])continue;
        v[now] = true;
        for (int i=0;i<adj[now].size();i++)
        {
            int val = adj[now][i];
            if (color[val] == -1)
            {
                color[val] = 1 - color[now];
                Cola.push(val);
            }
            else if (color[val] == color[now])
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
    while (true)
    {
        for (auto x: adj)x.clear();
        memset(v, false, sizeof(v));
        int e, n;
        cin >> e;
        if (e == 0)return;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        if (bfs(0))
        {
            cout << "BICOLORABLE." << endl;
        } else cout << "NOT BICOLORABLE." << endl;
    }
}

int main()
{
    solve();
    return 0;
}
