#include <bits/stdc++.h>
using namespace std;

void solve(int cas)
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int t = 0;
    int r = 0;
    for (int i=0;i<n;i++)
    {
        t+=a[i];
        if (t>c)break;
        r++;
    }
    cout<<"Case #"<<cas<<": "<<r<<endl;
}

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        solve(i+1);
    }
    return 0;
}
