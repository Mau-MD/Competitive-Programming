#include <bits/stdc++.h>
using namespace std;


struct node {
    int minn;
    int maxx;
};

struct segTree {

    vector<node>tree;
    int size;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.reserve(size * 2);
    }

    node merge(node a, node b)
    {
        node r;
        r.maxx = max(a.maxx, b.maxx);
        r.minn = min(a.minn, b.minn);
        return r;
    }

    void build(vector<int>& a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                tree[x] = {a[lx], a[lx]};
            }
            return;
        }

        int m = (lx + rx) / 2;
        build(a, 2 * x + 1,lx , m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = merge(tree[2 * x + 1], tree[2 * x + 2]);
    }   

    void build(vector<int>& a)
    {
        build(a,0,0,size);
    }

    void set(int i, int val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            tree[x] = {val, val};
            return;
        }
        int m = (rx + lx) / 2;
        if (i < m)
        {
            set(i, val, 2 * x + 1, lx, m);
        }
        else
        {
            set(i,val, 2 * x + 2, m ,rx);
        }
        tree[x] = merge(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int i, int val)
    {
        set(i,val,0,0,size);
    }

    node querry(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)return {INT_MAX,-1};
        if (lx >= l && rx <= r)return tree[x];

        int m = (rx + lx) / 2;
        node s1 = querry(l, r, 2 * x + 1, lx, m);
        node s2 = querry(l, r, 2 * x + 2, m, rx);
        return merge(s1,s2);
    }

    node querry(int l, int r)
    {
        return querry(l, r, 0, 0, size);
    }
};
int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    segTree st;
    st.init(n);

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    } 

    st.build(a);

    while(k--)
    {
        char op; cin>>op;
        if (op == 'C')
        {
            int s, e;
            cin>>s>>e;
            node res = st.querry(s-1,e);
            cout<<res.minn<<" "<<res.maxx<<endl;
        }
        else
        {
            int i, val;
            cin>>i>>val;
            st.set(i-1,val);
        }
    }


    return 0;
}