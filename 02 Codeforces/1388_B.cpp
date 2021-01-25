#include <bits/stdc++.h>
#define MAX 
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string ans;
    if (n==1)
    {
        cout<<"8"<<endl;
        return;
    }

    int d = n/4;
    int m = n%4;

    for (int i=0;i<d;i++)
    {
        ans += "8";
    }

    if (m != 0)ans+="8";

    for (int i=ans.size();i<n;i++)
    {
        ans = "9" + ans;
    }
    cout<<ans<<endl;

    
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