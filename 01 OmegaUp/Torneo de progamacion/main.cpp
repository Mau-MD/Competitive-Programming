#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    unsigned long long int a[n], sum = 0, res =0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for (int i=0;i<n;i++)
    {
        sum -= a[i];
        res += a[i] * sum;
    }
    cout<<res;

    return 0;
}
