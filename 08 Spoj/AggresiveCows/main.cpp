#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll maxN = 1e5 + 2;
const ll EPS = 1e9;
int n,c;
ll a[maxN];

// 1 2 4 8 9
bool can(ll k) // minimo k
{
    ll curr = a[0], diff, need = c-1;
    for (int i=1;i<n;i++)
    {
        diff = a[i] - curr;
        if (diff >= k)
        {
            curr = a[i];
            need--;
            if (need == 0)break;
        }
    }
    return need == 0;
}

void solve()
{
    cin>>n>>c;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    ll low = 0, high = EPS, mid;
    while ( high - low > 1)
    {
        mid = (low + high) / 2;
        if (can(mid)) low = mid;
        else high = mid;
    }
    cout<<low<<endl;

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
