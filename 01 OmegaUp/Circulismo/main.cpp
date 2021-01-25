#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>p,r;
int h,b,n;

void convertirAIntervalos()
{
    for (int i=0;i<p.size();i++)
    {
        if (p[i].second <= h/2)continue;
        int x = p[i].first;
        int dx = sqrt(pow(p[i].second, 2) - pow(h/2,2));
        r.push_back(make_pair(x-dx, x + dx));
    }
    sort(r.begin(),r.end());
}

int main()
{
    cin>>h>>b>>n;
    // x y radios
    for (int i=0;i<n;i++)
    {
        int x,r; cin>>x>>r;
        p.push_back(make_pair(x,r));
    }
    convertirAIntervalos();

    int ans = 0;
    pair<int,int>now = make_pair(0,0), base = make_pair(-1,-1);
    bool flag = 0;

    if (r[0].first > 0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for (int i=0;i<r.size();i++)
    {
        int j;
        if (r[i].first > base.second + 1)
        {
            cout<<-1<<endl;
            return 0;
        } // No es posible
        for (j=i;j<r.size();j++)
        {
            int q = r[j].first, o = r[j].second;
            if (r[j].first > base.second + 1)
            {
                flag = false;
                base = now;
                ans++;
                break;
            }
            if (r[j].second > now.second)now = r[j];
            flag = true;
        }
        if (flag)
        {
            base = now;
            ans++;
        }
        i = j - 1;
    }

    if (base.second < b)cout<<-1;
    else cout<<ans;

    return 0;
}
