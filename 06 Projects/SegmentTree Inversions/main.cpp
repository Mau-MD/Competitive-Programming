#include <bits/stdc++.h>
const int maxN = 1e5 + 2;
using namespace std;

struct segTree
{
    int size;
    vector<int>tree;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2,0);
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
            set(u, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(u, v, 2  * x + 2, m, rx);
        }
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void set(int u, int v)
    {
        set(u, v, 0, 0, size);
    }

    int querry(int l, int x, int lx, int rx)
    {
        if (rx <= l)return 0;
        if (lx >= l)return tree[x];
        int m = (lx + rx) / 2;
        int s1 = querry(l, 2 * x + 1, lx ,m);
        int s2 = querry(l, 2 * x + 2, m, rx);
        return s1 + s2;
    }

    int querry(int l)
    {
        return querry(l, 0, 0, size);
    }
};


int main()
{
    int n;
    cin>>n;

    segTree seg;
    seg.init(maxN);

    int x[n];

    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    for (int i=0;i<n;i++)
    {
        cout<<seg.querry(x[i] + 1)<<endl;
        seg.set(x[i],1);
    }

    return 0;
}
