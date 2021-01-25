#include <bits/stdc++.h>
using namespace std;
const int maxN = 1002;

int n,l;
int a[maxN];

int main()
{
    cin>>n>>l;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    double ans = -1;

    if (l == 1)
    {   
        cout<<"1";
        return 0;
    }
    else if (n == 1)
    
    {
        cout<<max(a[0], l - a[0]);
        return 0;
    }
    double min_distance = max((double) a[0] - 0.0f, (double) l - a[n-1]);

    for (int i=0;i<n-1;i++)
    {
        ans = max(ans, max(min_distance, (double)(a[i] + a[i+1]) / 2.0f - a[i]));
    }
    cout<<fixed<<setprecision(5)<<ans;



}
