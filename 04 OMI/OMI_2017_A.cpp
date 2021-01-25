#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll ans = 0;
    bool flag = false;
    for (ll i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] >= k)
        {
            flag = true;
            ans += k;
        }
        else
        {
            ans +=a[i];
        }
    }

    if (!flag)
    {
        ll maxx = 0;
        int index = 0;
        for (ll i=0;i<n;i++)
        {
            if (a[i] > maxx)
            {
                index = i;
                maxx = a[i];
            }
        }
        ans = ans + (k - a[index]);
    }
    cout<<ans<<endl;

    return 0;
}