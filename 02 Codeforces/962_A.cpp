#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    int mid = sum / 2;
    if (sum%2 != 0)mid++;
    int res = 0;
    for (int i=0;i<n;i++)
    {
        res += a[i];
        if (res >= mid)
        {
            cout<<i + 1<<endl;
            return 0;
        }
    }

    return 0;
}