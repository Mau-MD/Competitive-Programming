#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

struct segTree {
    vector<ll>tree;
    int size;

    void init(int n)
    {
        size = 1;
        while (size < n)size *= 2;
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
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void build(vector<ll>& a)
    {
        build(a,0,0,size);
    }

    ll querry(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
        {
            return 0LL;
        }
        if (lx >= l && rx <= r)
        {
            return tree[x];
        }
        int m = (lx + rx)/ 2;
        ll s1 = querry(l,r, 2 * x + 1, lx, m);
        ll s2 = querry(l,r,2 * x + 2, m, rx);
        return s1 + s2;
    }

    ll querry(int l, int r)
    {
        return querry(l,r,0,0,size);
    }
};

int main()
{
    segTree seg1, seg2;
    int n;
    cin>>n;

    seg1.init(n), seg2.init(n);
    vector<ll> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    seg1.build(a);
    sort(a.begin(),a.end());
    seg2.build(a);

    int q;
    cin>>q;
    for (int qq=0;qq<q;qq++)
    {
        int op;
        cin>>op;

        int l,r;
        cin>>l>>r;
        if (op == 1)
        {
            cout<<seg1.querry(l-1,r )<<endl;
        }
        else
        {
            cout<<seg2.querry(l-1,r )<<endl;
        }
    }
    return 0;
}
