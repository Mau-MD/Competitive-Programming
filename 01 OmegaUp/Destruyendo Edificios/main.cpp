#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    int n;
    cin>>n;

    ll a[n];
    cin>>a[0];
    stack<pair<ll,int>>ans;
    ans.push({a[0], 0});
    ll area_max = -1;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if (a[i] < ans.top().first)
        {
            ll last;
            while (!ans.empty() && a[i] <= ans.top().first)
            {
                last = ans.top().second;
                ll area = (i - ans.top().second) * ans.top().first;
                area_max = max(area_max, area);
                ans.pop();
            }
           //    cout<<a[i]<<" "<<last<<endl;
            ans.push({a[i],last});
        }
        else
        {
            ans.push({a[i], i});
        }
    }

    while(!ans.empty())
    {
        ll area = ((n) - ans.top().second) * ans.top().first;
        area_max = max(area, area_max);
        ans.pop();
    }
    cout<<area_max;

    return 0;
}
