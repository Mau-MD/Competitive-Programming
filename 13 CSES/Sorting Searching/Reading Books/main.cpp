#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin>>n;
    ll a[n], sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a+ n);
    cout<<max(sum, 2 * a[n-1]);
    return 0;
}
