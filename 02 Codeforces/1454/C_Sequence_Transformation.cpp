#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a,b;
    bool ok = false;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        b.push_back(d);
        if (i > 0 && b[i] != b[i-1])ok = true;
    }

    if (!ok)
    {
        cout<<0<<endl;
        return;
    }
    
    a.push_back(b[0]);
    for (int i=1;i<n;i++)
    {
        if (b[i] != b[i-1])a.push_back(b[i]);
    }



    map<int,int>mp;
    for (int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }

    mp[a[0]]--;
    mp[a[a.size()-1]]--;

    int minn = INT_MAX;
    for (auto x:mp)
    {
        if (x.second < minn)
        {
           // cout<<". "<<x.second<<endl;
            minn = x.second;
        }
    }
    
    cout<<minn + 1<<endl;

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