#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    map<char,int>oc;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for (int j=0;j<a.size();j++)
        {
            oc[a[j]]++;
        }
    }

    for (auto x:oc)
    {
        if (x.second % n != 0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;



}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}