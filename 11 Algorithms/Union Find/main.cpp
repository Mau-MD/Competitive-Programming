#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5 + 2;

int parent[maxN];
int size[maxN];

void make_set(int u)
{
    parent[u] = u;
    size[u] = 1;
}

int find_set(int u)
{
    if (parent[u] == u)return u;
    return parent[u] = find_set(parent[u]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])swap(a,b);
        parent[b] = a;
        size[a] += size[b];
    }
}

struct item
{
    int l;
    int r;
    int c;
};

int main()
{
    int n,q;
    cin>>n>>q;

    vector<item>queries;
    for (int i=0;i<q;i++)
    {
        int l,r,c;
        cin>>l>>r>>c;
        queries.push_back({l,r,c});
    }
    reverse(queries.begin(),queries.end());

    int ans[maxN + 1];

    for (int i=1;i<=n+1;i++)make_set(i);

    for (auto val:queries)
    {
        int l = val.l;
        int r = val.r;
        int c = val.c;

        for (int i = find_set(l); i <= r; i = find_set(i))
        {
            ans[i] = c;
            parent[i] = i + 1;
        }
    }

    for (int i=1;i<=n;i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}
