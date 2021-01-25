#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int,int> pii;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,ll>bits;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        int index;
        for (int j = 0; j < 32; j++)
        {
            if (a[i] & (1 << j))
            {
                index = j;
            }
        }
       // cout<<index<<endl;
        bits[index]++;
    }

    ll ans = 0;
    for (auto x : bits)
    {
        ll num = x.second; // Numero que se repite
        if (num % 2 == 0)
        {
            ans += (num / 2LL) * (num-1LL);
        }
        else
        {
            ans += ((num-1LL) / 2LL) * (num);
        }
    }
    cout<<ans<<endl;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
