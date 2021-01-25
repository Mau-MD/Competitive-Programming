#include <iostream>
using namespace std;
#define ll unsigned long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, maxi = 0;
    cin>>n;
    ll ar[n];
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            maxi = max(maxi,ar[i] ^ ar[j]);
        }
    }
    cout<<maxi;

    return 0;
}