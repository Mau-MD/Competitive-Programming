#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if (n == 1)
    {
        cout<<1;
        return 0;
    }
    int ans = 2;
    int cLen = 2;
    for (int i=2;i<n;i++)
    {
        if (a[i] == a[i-1] + a[i-2])cLen++;
        else cLen = 2;
        ans = max(ans, cLen);
    }
    cout<<ans;
    return 0;

}
