#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define ll  int
ll n;
bool v[MAX];
ll c[MAX];
vector<ll>g[MAX];
ll r;

void bfs(ll nodo, ll last, ll querry, ll res)
{
    v[nodo] = true;
    if (last != -1) res += abs(c[nodo-1] - c[last-1]);
    if (nodo == querry)
    {
        r = res;
        return;
    }
    else
    {
        for (ll i=0;i<g[nodo].size();i++)
        {
            if (!v[g[nodo][i]]) bfs(g[nodo][i],nodo,querry,res);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    ll x,y;
    for (ll i=0;i<n-1;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ll q;
    cin>>q;
    for (ll i=0;i<q;i++)
    {
        memset(v,false,MAX);
        cin>>x>>y;
        bfs(x,-1,y,0);
        cout<<r<<endl;
    }


    return 0;
}
