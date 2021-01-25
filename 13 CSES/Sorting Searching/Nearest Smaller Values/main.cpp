#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin>>n;
    stack<pair<ll,ll>>s;
    for (int i=0;i<n;i++)
    {
        ll d; cin>>d;
        while(!s.empty() && s.top().first >= d)s.pop();
        if (s.empty())
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<s.top().second + 1<<" ";
        }
        s.push({d,i});
    }
    return 0;
}
