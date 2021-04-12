#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 2;

struct segTree
{
    int size;
    vector<int>tree;
    vector<int>b;
    void init(int n)
    {
        size = 1;
        while (size < n)size *= 2;
        tree.assign(size * 2, 0);
        b.assign(n,1);
    }

    void build(int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < b.size())
            {
                tree[x] = b[lx];
            }
            return;
        }

        int m = (lx + rx) / 2;
        build(2 * x +1, lx, m);
        build(2 * x + 2, m, rx);
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void build()
    {
        build(0,0,size);
    }
    // Build un max
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
            set(u,v, 2 * x + 1, lx ,m);
        }
        else
        {
            set(u, v, 2 * x + 2, m, rx);
        }

        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void set(int u, int v)
    {
        set(u,v,0,0,size);
    }

    int kone(int k, int x, int lx, int rx)
    {
        if (rx - lx == 1)return lx;
        int m = (lx + rx) / 2;
        int izq = tree[2 * x + 1];
        if (izq >= k)
        {
            return kone(k, 2 * x + 1, lx, m);
        }
        else
        {
            return kone(k - izq, 2 * x + 2, m, rx);
        }
    }

    int kone(int k)
    {
        return kone(k, 0,0,size);
    }


};


int main()
{
    int n;
    cin>>n;
    int a[n];

    segTree seg;
    seg.init(n);
    seg.build();

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    reverse(a, a + n);
    vector<int>ans;

    for (int i=0;i<n;i++)
    {
        int val = seg.kone(a[i] + 1);
        ans.push_back(n - val);
        seg.set(val,0);
    }

    reverse(ans.begin(),ans.end());
    for (auto x:ans)cout<<x<<" ";
    return 0;
}
