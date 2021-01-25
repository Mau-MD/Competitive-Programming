#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans = 0;
    for (int i=n-1;i>=0;i--)
    {
        if (a[i-1] > a[i])
        {
            ans = ans + a[i-1] - a[i];
        }
    }
    cout<<ans<<" "  ;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}