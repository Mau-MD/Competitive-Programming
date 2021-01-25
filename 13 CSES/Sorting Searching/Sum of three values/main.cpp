#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<pair<int,int>>a;

    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        a.push_back({d, i+1});
    }

    sort(a.begin(),a.end());

    for (int x=0;x<n;x++)
    {
        pair<int,int> obj = {k - a[x].first, a[x].second};
        int i = x + 1, j = n - 1;
        while (i < j)
        {
            if (a[i].first + a[j].first == obj.first)
            {
                int res[] = {obj.second, a[i].second, a[j].second};
                sort(res, res + 3);
                cout<<res[0]<<" "<<res[1]<<" "<<res[2];
                return 0;
            }
            else if (a[i].first + a[j].first > obj.first)j--;
            else i++;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}