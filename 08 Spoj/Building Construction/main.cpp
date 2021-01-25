#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

vector<pair<ll,ll>>edificios;
int n;

ll val(ll k)
{
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans += (abs(k - edificios[i].first)) * edificios[i].second;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x[n], y[n];
        ll r = -1, l = LONG_LONG_MAX;
        edificios.clear();
        for (int i=0;i<n;i++)
        {
            cin>>x[i];
            r = max(x[i],r);
            l = min(l,x[i]);
        }
        for (int i=0;i<n;i++)
        {
            cin>>y[i];
            edificios.push_back({x[i],y[i]});
        }

        sort(edificios.begin(),edificios.end());
        ll m1, m2;
        while(r-l>=3)
        {
            m1 = l + (r - l) / 3;
            m2 = r - (r - l) / 3;

            ll v1 = val(m1);
            ll v2 = val(m2);

            if (v1 > v2)
            {
                l = m1;
            }
            else
            {
                r = m2;
            }
        }
        ll ans = LONG_LONG_MAX;
        for (ll i=l;i<=r;i++)
        {
            ans = min(ans, val(i));
        }
        cout<<ans<<endl;
    }
    return 0;
}
