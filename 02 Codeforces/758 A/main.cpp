#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int maxx = -1;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        maxx = max(maxx,a[i]);
    }

    int r =0;
    for (int i=0;i<n;i++)
    {
        r+= maxx - a[i];
    }
    cout<<r;

    return 0;
}
