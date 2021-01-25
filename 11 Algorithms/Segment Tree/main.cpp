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

    void build(vector<ll>& a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                tree[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = max(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void build(vector<ll>& a)
    {
        build(a,0,0,size);
    }

    void set(int u, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            tree[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (u < m)
        {
            set(u,v,2 * x + 1, lx, m);
        }
        else
        {
            set(u,v,2 * x + 2, m, rx);
        }
        tree[x] = max(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int u, int v)
    {
        set(u,v,0,0,size);
    }

    // Querry

    ll querry(int j, int l, int x, int lx, int rx)
    {
       if (tree[x] < j || rx <= l)return -1;
       if (rx - lx == 1)return lx;
       int m = (lx + rx) / 2;
       int res = querry(j,l,2 * x + 1,lx,m);
       if (res == -1)
       {
           res = querry(j,l, 2 * x + 2, m, rx);
       }
       return res;
    }

    ll querry(int x, int l)
    {
        return querry(x,l,0,0,size);
    }


};


int main()
{
    int n,m;
    cin>>n>>m;

    vector<ll>a(n);
    segTree seg;
    seg.init(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    seg.build(a);

    /*
    for (auto x:seg.tree)
    {
        cout<<x<<" ";
    }
    */

    while(m--)
    {
        int d; cin>>d;
        if (d == 1)
        {
            int u,v;
            cin>>u>>v;
            seg.set(u,v);
        }
        else
        {
            int k, l; cin>>k>>l;
            cout<<seg.querry(k,l)<<endl;
        }
    }
}