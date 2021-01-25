#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<ll,ll> pii;

int main()
{
    int n;
    cin>>n;

    vector<pii>a;
    for (int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end());

    ll ans = 0, current = 0;
    for (int i=0;i<n;i++)
    {
        current += a[i].first;
        ans += (a[i].second - current);
    }
    cout<<ans;
    return 0;
}
