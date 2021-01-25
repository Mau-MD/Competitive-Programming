#include <bits/stdc++.h>
using namespace std;

struct segTree
{
    int size;
    vector<int> tree;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2, 0);
    }

    void build(vector<int>& a, int x, int lx, int rx)
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

        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void build(vector<int>& a)
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

        int m = (rx + lx) / 2;
        if (u < m)
        {
            set(u,v, 2 * x + 1, lx, m);
        }
        else
        {
            set(u,v, 2 * x + 2, m ,rx);
        }

        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void set(int u, int v)
    {
        set(u,v,0,0,size);
    }

    int querry(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)return 0;
        if (lx >= l && rx <= r)return tree[x];

        int m = (lx + rx) / 2;
        int s1 = querry(l,r, 2 * x + 1, lx, m);
        int s2 = querry(l,r, 2 * x + 2, m, rx);

        return s1 + s2;
    }

    int querry(int l, int r)
    {
        return querry(l,r,0,0,size);
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    segTree seg;
    seg.init(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (i % 2 != 0)a[i] *= -1;
    }


    seg.build(a);

    int m;
    cin>>m;
    while(m--)
    {
        int d; cin>>d;
        if (d == 0)
        {
            int u,v;
            cin>>u>>v;
            if ((u-1) % 2 != 0)v  *= -1;
         //   cout<<u<<" "<<v<<endl;
            seg.set(u-1,v);

        }
        else
        {
            int l,r;
            cin>>l>>r;
            int val = seg.querry(l-1,r);
            if (a[l-1] < 0)val *= -1;
            cout<<val<<endl;
        }
    }


    return 0;
}