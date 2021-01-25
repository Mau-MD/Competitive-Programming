#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int maxx = 0;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        int res = a[i];
        for (int j=i+1;j<n;j++)
        {
            res = res ^ a[j];
            if (res >  maxx)
            {
                maxx = res;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}
