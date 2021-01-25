#include <bits/stdc++.h>
using namespace std;

struct segTree {

    int size;
    vector<int>tree;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2, 0);
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
            set(u,v, 2 * x + 1, lx , m);
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
        int s2 = querry(l,r, 2 * x + 2,m,rx);
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

    segTree seg;
    map<int,int>ind;


    seg.init(2 * n);
    int a[2*n+1]; cin>>a[0];
    int first = a[0];

    vector<int>res(2 * n,0);
    for (int i=1;i<2 * n;i++)
    {
        cin>>a[i];
        if (ind[a[i]] > 0 || a[i] == first)
        {
            seg.set(ind[a[i]],0);
            res[a[i]] += seg.querry(ind[a[i]],i);
        }
        else
        {
            ind[a[i]] = i;
            seg.set(i,1);
        }
    }
    ind.clear();
    for (int i=2*n-1;i>=0;i--)
    {
   //     cout<<i<<" "<<ind[a[i]]<<endl;
        if (ind[a[i]] > 0 )
        {
            seg.set(ind[a[i]],0);
            res[a[i]] += seg.querry(i,ind[a[i]]);
        }
        else
        {
            ind[a[i]] = i;
            seg.set(i,1);
        }
    }
    for (int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}
