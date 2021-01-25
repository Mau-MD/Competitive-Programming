#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    ll a[n];
    bool neg = false;
    ll tot = 0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        tot+=a[i];
        if (a[i] < 0)neg = true;
    }
    if (!neg)
    {

        for (int i=0;i<n;i++)
        {
            if (a[i]==0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        ll ans = 0;
        ll ans2 = 0;
        ll res1 = 0, res2 = 0;

        for (ll i=0;i<n-1;i++)
        {
            ans += a[i];
            res1 = max(ans,res1);
            if (ans <= 0)ans = 0;
        }

        for (int i=1;i<n;i++)
        {
            ans2 += a[i];
            res2 = max(res2,ans2);
            if (ans2 <= 0) ans2 = 0;
        }

        
        ans = max(res2,res1);
        
       // cout<<tot<<" "<<ans<<endl;
        if (tot > ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
} 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}