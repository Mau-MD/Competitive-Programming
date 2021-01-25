#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll x;
    cin>>x;
    sort(a, a+n);
    ll low = 0, high = n-1;
    ll ans1 = 9999999, ans2 = 0;
    while (low < high)
    {
        if (a[low] + a[high] == x)
        {
            if (a[high] - a[low] < ans2 - ans1)
            {
                ans1 = a[low];
                ans2 = a[high];
            }
            low++;
            high--;
        }
        else if (a[low] + a[high] > x)high--;
        else low++;
    }

    if (a[low] > a[high])swap(a[low],a[high]);
    cout<<"Peter should buy books whose prices are "<<a[low]<<" and "<<a[high]<<"."<<endl;
    return 0;
}
