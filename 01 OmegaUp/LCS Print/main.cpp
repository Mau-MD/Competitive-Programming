#include <bits/stdc++.h>
using namespace std;
string a,b;
vector<pair<int,int>>coord;
int dp[5002][5002];
int r = 0;
void solve()
{
    for (int i=0;i<=a.size();i++)
    {
        for (int j=0;j<=b.size();j++)
        {
            if (i == 0 || j == 0)dp[i][j]= 0;
            else if (a[i-1]==b[j-1])dp[i][j] = dp[i-1][j-1] + 1;
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    r = dp[a.size()][b.size()];
}

void reconstruct(int i, int j)
{
    if (i==0 || j == 0)
    {
        coord.clear();
    }
    else if (a[i-1] == b[j-1])
    {
        reconstruct(i-1, j-1);
        coord.push_back(make_pair(i,j));
    }
    else if (dp[i][j] == dp[i-1][j])
    {
        reconstruct(i-1,j);
    }
    else
    {
        reconstruct(i,j-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>a>>b;
    memset(dp,0,sizeof(dp));
    solve();
    reconstruct(a.size(),b.size());
    cout<<r<<endl;
    for (int i=0;i<r;i++)
    {
        cout<<coord[i].first-1<<" "<<coord[i].second-1<<endl;
    }
    return 0;
}
