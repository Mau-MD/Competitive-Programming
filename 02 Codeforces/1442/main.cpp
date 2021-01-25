#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<ll,ll> pii;

struct segTree{

    vector<int>tree;
    int size;

    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2, 0);
    }

    void build(vector<int>& a , int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                tree[x] = a[lx];
            }
            return ;
        }

        int m = (lx + rx) /2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = min(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void build(vector<int>& a)
    {
        build(a,0,0,size);
    }

    int querry(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || lx >= r)
        {
            return INT_MAX;
        }
        if (lx >= l && rx <= r)
        {
            return tree[x];
        }
        int m = (lx + rx) / 2;
        int s1 = querry(l,r,2*x+1,lx,m);
        int s2 = querry(l,r,2*x+2,m,rx);
        return min(s1,s2);
    }

    int querry(int l, int r)
    {
        return querry(l,r,0,0,size);
    }
};

void solve()
{
   int n;
   cin>>n;
   vector<int>a(n);
   segTree seg;
   seg.init(n);
   for (int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   seg.build(a);

   int rest = 0;
   for (int i=1;i<n;i++)
   {
       if (a[i] > a[i-1]) // No es decreciente
       {
           int minimo = a[i] - a[i-1];
           int querry = seg.querry(i,n);
           if (querry - rest < minimo)
           {
               cout<<"NO"<<endl;
               return;
           }
           rest += minimo;
       }
   }
   cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    // t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
