#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin>>a;
    map<char,int>s;
    int ans = 0;
    for (int i=0;i<a.size();i++)
    {
        if (a[i] == ']')
        {
            if (s['['] >= 1)
            {
                s['[']--;
                ans++;
            }
        }
        else if (a[i] == ')')
        {
            if (s['('] >= 1)
            {
                s['(']--;
                ans++;
            }
        }
        else
        {
            s[a[i]]++;
        }
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
