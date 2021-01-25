#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

struct segTree
{
    int size;
    vector<ll>tree;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2, 0);
    }

    void add(int l, int r, int v, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)return;
        if (lx >= l && rx <= r)
        {
            tree[x] += v;
            return;
        }
        int m = (lx + rx) / 2;
        add(l,r,v,2 * x + 1, lx, m);
        add(l,r,v, 2 * x + 2, m ,rx);
    }

    void add(int l, int r,int v)
    {
        add(l,r,v,0,0,size);
    }

     ll get(int i, int x, int lx, int rx)
     {
        if (rx - lx == 1)return tree[x];
        int m = (lx + rx) / 2;
        ll sum;
        if (i < m)
        {
            sum = get(i, 2 * x + 1, lx, m);
        }
        else
        {
            sum = get(i, 2 * x + 2, m, rx);
        }
        return sum + tree[x];
     }

     ll get(int i)
     {
        return get(i,0,0,size);
     }
};
int main()
{
    int n,m;
    cin>>n>>m;
    segTree seg;
    seg.init(n);
    for (int i=0;i<m;i++)
    {
        int d; cin>>d;
        if (d == 1)
        {
            int l,r; ll v;
            cin>>l>>r>>v;
            seg.add(l,r,v);
        }
        else
        {
            ll u; cin>>u;
            cout<<seg.get(u)<<endl;
        }
    }
    return 0;
}
