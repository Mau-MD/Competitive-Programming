#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int maxN = 500002;
const int LIM = maxN - 2;


struct segTree
{
    int size;
    vector<ll>tree;

    void init(int n)
    {
        size = 1;
        while (size < n)size *= 2;
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
            set(u,v,2 * x + 2, m, rx);
        }
        tree[x] = max(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int u, int v)
    {
        set(u,v,0,0,size);
    }

    int querry(int l, int j, int x, int lx, int rx)
    {
        if (rx <= l || tree[x] <= j)return -1;
        if (rx - lx == 1)return lx;

        int m = (lx + rx) / 2;

        int s1 = querry(l,j, 2 * x + 1, lx, m);
        if (s1 == -1)
        {
            s1 = querry(l,j, 2 * x + 2, m, rx);
        }
        return s1;
    }

    int querry(int l, int j)
    {
        return querry(l,j,0,0,size);
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    segTree seg;
    seg.init(maxN);

    int l = LIM;
    int pizza[maxN];

    memset(pizza,-1,sizeof(pizza));

    for (int i=0;i<n;i++) // Op
    {
        int d; cin>>d;
        if (d == 0) // Querry
        {
            if(pizza[l]!=-1)cout<<pizza[l]<<endl;
            else cout<<0<<endl;
        }
        else if (d == 1)
        {
            ll diam; cin>>diam;

            l--;

            if (diam < pizza[l+1])pizza[l] = pizza[l+1] + 1;
            else
            {
                int index = seg.querry(l, diam);
                if (index == -1) pizza[l] = 1;
                else pizza[l] = 1 + pizza[index];
            }
            seg.set(l,diam);
        }
        else if (d == 2)
        {
            int rem; cin>>rem;
            l += rem;
        }
    }



    return 0;
}
