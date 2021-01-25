#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin>>n;
    ll a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int mid = a[(n - 1) / 2];

    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans += abs(mid - a[i]);
    }
    cout<<ans;

    return 0;
}
