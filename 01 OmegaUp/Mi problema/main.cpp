#include <bits/stdc++.h>
using namespace std;
#define MAX 1000002
#define ll int
ll n, u, q;
int a[MAX], dif[MAX-1];
ll tree[4*MAX+2];



void generateTree(ll low, ll high, ll pos)
{
    if (low == high)
    {
        tree[pos] = dif[low];
        return;
    }
    ll mid = (low + high)/2;
    generateTree(low,mid,2*pos+1);
    generateTree(mid+1,high,2*pos+2);
    tree[pos] = tree[2*pos+1] + tree[2*pos+2];
}

ll querry(ll low, ll high, ll pos, ll rlow, ll rhigh)
{
    if (rhigh < low || rlow > high)return 0;
    if (rlow <= low && rhigh >= high)return tree[pos];
    ll mid = (low + high)/2;
    return querry(low, mid, 2*pos+1, rlow, rhigh) + querry(mid+1, high, 2*pos+2, rlow, rhigh);
}

void update(ll low, ll high, ll pos, ll index, ll val)
{
    if (low == high)tree[pos] = val;
    else
    {
        ll mid = (low + high)/2;
        if (low <= index && index<=mid)
        {
            update(low, mid, 2*pos+1, index, val);
        }
        else
        {
            update(mid+1, high, 2*pos+2, index, val);
        }
        tree[pos] = tree[2*pos+1] + tree[2*pos+2];
        return;
    }
}

void updateData(ll index, ll val)
{
    a[index - 1] += val;
    //cout<<abs(a[index - 1] - a[index-2])<<" "<<abs(a[index-1] - a[index])<<endl;
    if (index - 2 >= 0)update(0,n-2,0,index-2,abs(a[index -1] - a[index-2]));
    if (index < n)update(0,n-2,0,index-1,abs(a[index-1] - a[index]));
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> u >> q;
    memset(dif,0,MAX-1);
    memset(tree,0,4*MAX+2);


    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            dif[i - 1] = abs(a[i] - a[i - 1]);
        }
    }

    generateTree(0, n - 2, 0);

    map<ll,pair<ll,ll>>updates;

    for (ll i=0;i<u;i++)
    {
        ll x,h,m;
        cin>>x>>h>>m;
        updates[m] = make_pair(x,h);
    }

    auto it = updates.begin();
    for (ll i=0;i<q;i++)
    {
        ll ri,rf,m;
        cin>>ri>>rf>>m;
        /*
        for (int x=0;x<2*n+1;x++)
        {
            cout<<tree[x]<<" ";
        }
         */
        while (it != updates.end() && (*it).first <= m)
        {
            if (it == updates.end())break;
            updateData((*it).second.first, (*it).second.second);
            it++;
        }

        cout<<querry(0,n-2,0,ri-1,rf-2)<<endl;
    }


    return 0;
}
