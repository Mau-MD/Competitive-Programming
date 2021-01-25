#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    else if (n==3 || n==2)
    {
        cout<<"2"<<endl;
        return;
    }
    else
    {
        int aux = n/2;
        cout<<aux+1<<endl;
    }
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