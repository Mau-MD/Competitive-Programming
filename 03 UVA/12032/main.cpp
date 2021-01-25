#include <bits/stdc++.h>
#define ll long long int
const ll maxN = 1e5 + 2;
const ll EPS = 1e9;
using namespace std;

int a[maxN];
int n;

bool reach(ll k)
{
    ll diff;
    for (int i=0;i<n;i++)
    {
        if (i == 0)diff = a[i];
        else diff = a[i] - a[i-1];
        if (diff > k)return false;
        else if (diff == k)k--;
    }
    return true;
}

void solve(int casee)
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll low = 0, high = EPS, mid;
    while (high - low > 1)
    {
        mid = ((low + high) / 2);
        if (reach(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout<<"Case "<<casee<<": "<<high<<endl;

}

int main()
{
    int t;
    int i = 1;
    cin >> t;
    while (t--)
    {
        solve(i++);
    }
    return 0;
}
