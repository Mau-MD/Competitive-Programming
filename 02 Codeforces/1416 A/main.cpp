#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,vector<int>>num;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (num[a[i]].empty())num[a[i]].push_back(0);
        num[a[i]].push_back(i+1);
    }

    vector<int>res(n+1,INT_MAX);
    for (auto x:num)
    {
        if (!x.second.empty())
        {
            x.second.push_back(n+1);
            int maxGap = -1;
            for (int i = 1; i < x.second.size(); i++)
            {
                maxGap = max(maxGap, x.second[i] - x.second[i-1]);
            }
            res[maxGap] = min(res[maxGap], x.first);
            //cout<<x.first<<" "<<maxGap<<" "<<res[maxGap]<<endl;
        }
    }
    for (int i=2;i<=n;i++)
    {
        if (res[i-1] < res[i] && res[i-1] != -1)res[i] = res[i-1];
    }
    for (int i=1;i<=n;i++)
    {
        if (res[i] == INT_MAX)cout<<-1<<" ";
        else cout<<res[i]<<" ";
    }

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
