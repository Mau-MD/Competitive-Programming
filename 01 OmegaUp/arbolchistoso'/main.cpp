/*
*	User: Isanchez_Aguilar
*	Problem: omegaUp Arboles Chistosos
*/
#include <bits/stdc++.h>

using namespace std;

#define MAX 200005
#define LSOne(S) (S & (-S))


int idx;
int values[MAX];
int sign[MAX];
bool visited[MAX];
int indexEnd[MAX];
int ft[(MAX << 1)];
int indexStart[MAX];
vector<int> adj[MAX];

inline void adjust(int i,int x)
{
    while (i < (MAX << 1))
    {
        ft[i] += x;
        i += LSOne(i);
    }

    return;
}

inline int rsq(int i)
{
    int sum = 0;

    while (i)
    {
        sum += ft[i];
        i -= LSOne(i);
    }

    return sum;
}

inline void dfs(int u, int sgn)
{
    if (visited[u])
        return;

    sign[u] = sgn;
    visited[u] = true;
    indexStart[u] = ++idx;

    for (int i = 0; i < adj[u].size(); ++i)
    {
        int v = adj[u][i];
        if(not visited[v])
            dfs(v, -sgn);
    }

    indexEnd[u] = ++idx;

    return;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        cin >> values[i];

    for (int i = 1; i < n; ++i)
    {
        int u;
        int v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    idx = 0;
    dfs(1, 1);

    while(m--)
    {
        int q;
        int x;
        int value;
        cin >> q;

        if(q == 1)
        {
            cin >> x >> value;
            adjust(indexStart[x], value * sign[x]);
            adjust(indexEnd[x] + 1, -value * sign[x]);
        }
        else
        {
            cin >> x;
            cout << values[x] + rsq(indexStart[x]) * sign[x] << "\n";
        }
    }

    return 0;
}