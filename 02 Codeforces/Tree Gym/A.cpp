#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll maxN = 10e+5;
ll n;
vector<ll>nodes[maxN];

struct solve
{
    ll x;
    ll d;
    solve(ll x1,ll d1):x(x1), d(d1){}
};

ll nodePos = 0;

ll bfs(ll start, bool v[]) // need to know which node is 
{
    ll ans = 0;
    nodePos = 0;
    solve init(start,0);
    queue<solve>Cola;
    Cola.push(init);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (v[now.x])continue;
        v[now.x] = true;
        if (now.d > ans)
        {
            ans = now.d;
            nodePos = now.x;
        }
        for (int i=0;i<nodes[now.x].size();i++)
        {
            ll nextnode = nodes[now.x][i];
            solve r(nextnode, now.d + 1);
            Cola.push(r);
        }
    }
    return ans;
}


int main()
{
    cin>>n;
    ll last;
    for (ll i=0;i<n-1;i++)
    {
        ll x,y;
        cin>>x>>y;
        last = x;
        nodes[x].push_back(y);
        nodes[y].push_back(x);
    }

    bool v[maxN];
    //cout<<bfs(n/2,v)<<" "<<nodePos<<endl;
    bfs(last,v);
    for (int i=0;i<maxN;i++)
    {
        v[i] = 0;
    }
    ll diam = bfs(nodePos,v);
    //cout<<'\n';
    //cout<<diam<<" "<<nodePos<<endl;
    cout<<3*diam;

    return 0;
}