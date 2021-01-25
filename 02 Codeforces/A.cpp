#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for (int i=n;~i + 1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}