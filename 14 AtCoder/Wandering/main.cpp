#include <iostream>
using namespace std;
using ll = long long int;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll cord = 0, maxx = 0;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<i;j++)
        {
            cord += a[j];
            if (cord > maxx)
            {
                maxx = cord;
            }
        }
    }
    cout<<maxx;
    return 0;
}
