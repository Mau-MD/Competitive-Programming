#include <bits/stdc++.h>
#define ll long long int
const ll MAX = 3e6 ;

using namespace std;

vector<ll> solve(vector<ll> a, ll n, ll aux)
{
    while (true)
    {
        if (aux>=MAX)break;
        ll t = pow(2,n);
        vector<ll> res;
        res.reserve(a.size() * 2 + 1);
        res.insert(res.end(), a.begin(),a.end());
        res.push_back(t);
        res.insert(res.end(), a.begin(),a.end());
        n++;
        aux= aux * 2 + 1;
        a = res;
    }
    return a;
}

ll sums[MAX];

ll srq(ll i, ll j)
{
    if (i==0)return sums[j];
    else return sums[j] - sums[i-1];
}

int main()
{
    vector<ll>start;
    start.push_back(1);
    start.push_back(2);
    start.push_back(1);

    vector<ll> res = solve(start,2,3);
    ll n;
    cin>>n;

    sums[0] = res[0];
    cout<<res.size()<<endl;
    for (int i=1;i<res.size();i++)
    {
        sums[i] = res[i];
        sums[i] = sums[i] + sums[i-1];
        //cout<<i<<" ";
    }

    for (ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<srq(a-1,b-1)<<endl;

    }
    return 0;
}
