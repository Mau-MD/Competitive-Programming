#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;

    bool ok = true;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        mp[d]++;
        if (d == 5 || d == 7)ok = false;
    }

    if (!ok)
    {
        cout<<-1<<endl;
        return 0;
    }

    int ps[3][3] = {{1,2,4} , {1,2,6}, {1,3,6}};
    vector<array<int,3>>ans;
    bool okk = false;
    for (int i=0;i<n/3;i++)
    {
        int p,s,t;
        for (int j = 0; j < 3; j++)
        {
            p = ps[j][0]; s = ps[j][1]; t = ps[j][2];
            if (mp[p] >= 1 && mp[s] >= 1 && mp[t] >= 1)
            {
                mp[p]--; mp[s]--; mp[t]--;
                ans.push_back({p,s,t});
                okk = true;
                break;
            }
        }

        if (!okk)
        {
            cout<<-1;
            return 0;
        }
    }

    if (ans.size() != n/3)
    {
        cout<<-1;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
        }
    }

    return 0;
}
