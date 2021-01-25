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
    int maxx = -1;
    int res;
    for (int i=2;i<=1000;i++)
    {
        int ans = 0;
        for (int j=0;j<n;j++)
        {
            if (a[j] % i == 0)ans++;
        }
        if (ans > maxx)
        {
            maxx = ans;
            res = i;
        }
    }
    cout<<res;

    return 0;
}
