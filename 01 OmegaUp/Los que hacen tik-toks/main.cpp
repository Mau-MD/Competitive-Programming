#include <bits/stdc++.h>
#define MAX 100002
#define ll long long int
using namespace std;

bool v[MAX];
vector<int>g[MAX];
ll n,d; // Estudiantes

ll bfs(int x)
{
    ll nod = 0;
    queue<ll>Cola;
    Cola.push(x);
    while (!Cola.empty())
    {
        int now = Cola.front();
        Cola.pop();
        if (v[now])continue;
        v[now]= true;
        nod++;
        //cout<<"size "<<now<<" "<<g[now].size()<<endl;
        for (int j=0;j<g[now].size();j++)
        {
           // cout<<now<<" "<<g[now][j]<<endl;
            Cola.push(g[now][j]);
        }
    }
    return nod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d;
    for (int i = 0; i < d; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


    ll tot = n, res = 0;
    for (int i=0;i<n;i++)
    {
        if (!v[i])
        {
            ll nodos = bfs(i);
           //cout<<i<<" "<<nodos<<endl;
            tot -= nodos;
            res+= (tot * nodos);
        }
    }
    cout<<res;


    return 0;
}
