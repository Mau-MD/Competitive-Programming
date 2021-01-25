#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<>());

    int ans = 0;
    int dif = 0;
    for (int i=0, j;i<n;i++)
    {
        int val = a[i] - dif;
        int sum = 0;
        j = i;
        while (sum < val && j < n)
        {
            j++;
            sum += a[j];
        }
        ans += max(sum, val);
        dif = abs(sum - val);
        i = j;
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
