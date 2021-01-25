#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin>>n;
    map<ll,int>ind;

    int ans = 0, last  = 0;
    int f = 0;
    for (int i=1;i<=n;i++)
    {
        int d; cin>>d;
        if (ind[d] > 0)
        {
            if (ind[d] >= last)
            {
                ans -= (ind[d] - last);
                last = ind[d];
            }
        }
        ind[d] = i;
        ans++;
        f = max(ans, f);
    }
    f = max(ans, f);
    cout<<f;
    return 0;
}
