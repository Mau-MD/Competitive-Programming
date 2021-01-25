#include <bits/stdc++.h>
#define MAX 
using namespace std;

void solve()
{
    int d;
    cin>>d;
    if (d < 31)
    {
        cout<<"NO"<<endl;
        return;
    }

    int r = d - 30;
    if (r == 6 || r == 10 || r == 14)
    {
        r = d - 31;
        cout<<"YES"<<endl;
        cout<<"6 10 15 "<<r<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<"6 10 14 "<<r<<endl;
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}