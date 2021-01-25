#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    vector<pair<int,int>>a;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        a.push_back({d,i + 1});
    }

    sort(a.begin(),a.end());

    for (int x = 0; x < n; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
            int obj = k - (a[x].first + a[y].first);
            int i = y + 1, j = n-1;
            while (i < j)
            {
                if (a[i].first + a[j].first == obj)
                {
                    int ans[] = {a[x].second, a[y].second, a[i].second, a[j].second};
                    sort(ans, ans + 4);
                    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3];
                    return 0;
                }
                else if (a[i].first + a[j].first > obj)j--;
                else i++;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
