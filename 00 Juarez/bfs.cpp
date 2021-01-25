#include <bits/stdc++.h>
using namespace std;

int n,e;

void bfs(vector<int> graph[], int initial, int v[])
{ 
    stack<int>Cola;
    Cola.push(initial);

    while (!Cola.empty())
    {
        int now = Cola.top();
        Cola.pop();

        cout<<now<<" ";

        if (v[now])continue;
        v[now] = true;

        for (int i=0;i<graph[now].size();i++)
        {
            int next = graph[now][i];
            if (!v[next])
            {
                Cola.push(next);
            }
        }
    }
}

void dfs(vector<int>graph[], int node, int v[])
{
    cout<<node<<" ";
    v[node] = true; 
    for (int i=0;i<graph[node].size();i++)
    {
        int next = graph[node][i];
        if (!v[next])dfs(graph, next, v);
    }
}


void solve()
{
    cin>>n>>e;
    vector<int> graph[n];
    for (int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int v[100] = {0};
    dfs(graph, 0, v);


}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }


    return 0;
}