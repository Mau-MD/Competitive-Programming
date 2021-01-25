#include <bits/stdc++.h>
using namespace std;

struct segTree
{
    int size;
    vector<int>tree;
    vector<int>lazy;

    void init(int n)
    {
        size = 1;
        while(size<n)size*=2;
        tree.assign(size * 2,0);
        lazy.assign(size * 2, 0);
    }

    void set( int v, int l, int r, int x, int lx, int rx) // Voy a hacer set como querry
    {
        if (lazy[x] != 0)
        {
            tree[x] = lazy[x];
            if (rx - lx != 1)
            {
                lazy[2 * x + 1] = tree[x];
                lazy[2 * x + 2] = tree[x];
            }
            lazy[x] = 0;
        }
        if (lx >= r || l >= rx) // Fuera del segmento
        {
            return;
        }
        if (lx >= l && rx <= r) // Dentro del segmento
        {
            tree[x] = v;
            if (rx - lx != 1) // No es leaf
            {
                lazy[2 * x + 1] = v;
                lazy[2 * x + 2] = v;
            }
            return;
        }
        int m = (rx + lx) / 2;
        set(v,l,r,2 * x + 1, lx, m);
        set(v,l,r, 2 * x + 2, m, rx);
    }

    void set(int l, int r, int v)
    {
        set(v,l,r,0,0,size);
    }

    int querry(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)return -1;
        if (lazy[x] != 0)
        {
            tree[x] = lazy[x];
            if (rx - lx != 1)
            {
                lazy[2 * x + 1] = tree[x];
                lazy[2 * x + 2] = tree[x];
            }
            lazy[x] = 0;
        }

        if (lx >= l && rx <= r)return tree[x];
        int m = (rx + lx) / 2;
        int s1 = querry(l,r,2 * x + 1, lx, m);
        int s2 = querry(l,r, 2*  x + 2, m, rx);
        if (s1 != -1)return s1;
        else if (s2 != -1)return s2;
        else return -1;
    }

    int querry(int l, int r)
    {
        return querry(l,r,0,0,size);
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
        if (d == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            seg.set(l, r, v);
        }
        else
        {
            int i;
            cin>>i;
            cout<<seg.querry(i,i+1)<<endl;
        }
    }
    return 0;
}
