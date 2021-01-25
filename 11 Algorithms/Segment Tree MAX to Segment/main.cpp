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

    void set(int l, int r, ll v, int x, int lx, int rx) // Mass
    {
        if (lx >= r || l >= rx)return;
        if (lx >= l && rx <= r)
        {
            tree[x] = max(tree[x], v);
            return;
        }
        int m = (lx + rx) / 2;
        set(l,r,v, 2 * x + 1, lx , m);
        set(l,r,v, 2 * x + 2, m , rx);
    }

    void set(int l, int r, int v)
    {
        set(l,r,v,0,0,size);
    }

    ll querry(int i, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            return tree[x];
        }
        int m = (lx + rx)/ 2;
        ll s;
        if (i < m)
        {
            s = querry(i, 2 * x + 1, lx, m);
        }
        else
        {
            s = querry(i, 2 * x + 2, m, rx);
        }
        return max(tree[x], s);

    }
 
    ll querry(int i)
    {
        return querry(i,0,0,size);
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    segTree seg;
    seg.init(n);

    while(m--)
    {
        int d; cin>>d;
        if (d==1)
        {
            int l,r,v;
            cin>>l>>r>>v;
            seg.set(l,r,v);
        }
        else
        {
            int i;
            cin>>i;
            cout<<seg.querry(i)<<endl;
        }
    }
    return 0;
}
