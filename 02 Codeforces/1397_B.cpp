#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

const int maxN = 1e6;

int n;
ll a[maxN];

ll simul(ll c)
{
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans += (llabs(a[i] - (ll) powl(c,i)));
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    ll low = 0, high = maxN, mid;
    ll left, right, midVal;
    while (low<high)
    {
        mid = (low + high) / 2;
        left = simul(mid-1);
        right = simul(mid+1);
        midVal = simul(mid);

        if (midVal < left && midVal < right)
        {
            cout<<mid<<endl;
            cout<<midVal<<endl;
            return 0;
        }
        else if (midVal < right && midVal > left)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout<<midVal<<endl;
   
    




    return 0;
}