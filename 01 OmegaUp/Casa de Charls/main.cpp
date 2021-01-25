#include <bits/stdc++.h>
using ll = long long int;
using namespace std;


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
    int casa = (n-1) / 2;
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans += abs(a[i] - a[casa]);
    }
    cout<<ans;
    return 0;
}
