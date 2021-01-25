#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    ll a[n];
    memset(a,0,sizeof(n));
    vector<pair<int,int>>data;

    for (int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        data.push_back(make_pair(y,x));
    }

    sort(data.begin(),data.end());

    if (data[0].second == 1)
    {
        a[0] = 1;
    }
    else
    {
        a[0] = -1;
    }
    for (int i=1;i<n;i++)
    {
        if (data[i].second == 1)
        {
            a[i] = a[i-1] + 1;
        } 
        else
        {
            a[i] = a[i-1] - 1;
        }
    }

    unordered_map<int,int>indices;
    // 1 0 1 2
    // sum (i-1) = sum(j)
    int ans = 0;
    int actual;
    for (int i=0;i<n;i++)
    {
        actual = a[i];
       // cout<<"actual "<<a[i]<<endl;
        if (indices[actual] == 0)
        {
            indices[actual] = i+1;
        }
        else
        {
           // cout<<data[i].first<<" "<<data[indices[actual] - 1].first<<endl;
            ans = max(ans, data[i].first - data[indices[actual]].first);
        }
    }
    cout<<ans;

    return 0;
}