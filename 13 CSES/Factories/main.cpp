#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long int;
const ll maxN = 2 * 1E5 + 2;
const ll EPS = 1E18 + 2;
ll a[maxN];
ll t;
int n;

ll producidos(ll tiempo)
{
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        ans+= (tiempo/ a[i]);
    }
    return ans;
}


int main()
{

    cin>>n>>t;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll low = 0, high = EPS, mid;
    if (t == 1)
    {
        ll minn = EPS;
        for (int i=0;i<n;i++)
        {
            minn = min(minn,a[i]);
        }
        cout<<minn;
        return 0;
    }

    while (high - low > 1)
    {
        mid = (low + high) / 2;
        ll cuenta = producidos(mid);
        if (cuenta >= t)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout<<high;
    return 0;
}
