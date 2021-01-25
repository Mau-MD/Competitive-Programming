#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    vector<pair<ll,ll>>temp;
    cin>>n;

    for (int i=1;true;i++)
    {
        if (n/i < i)break;
        if (n % i == 0)
        {
            temp.push_back({i,n/i});
        }
    }

    vector<ll>ans;
    for (auto x:temp)
    {
        ans.push_back(x.first);
        if (x.second != x.first)ans.push_back(x.second);
    }
    sort(ans.begin(),ans.end());
    for (auto x:ans)
    {
        cout<<x<<endl;
    }
    return 0;
}
