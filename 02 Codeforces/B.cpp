#include <bits/stdc++.h>
using namespace std;
#define MAX 102


int n,c;

void solve()
{
    cin>>n>>c;
    char m[n][c];

    int ans = 0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin >> m[i][j];
            if (i == n-1 && j == c-1) {}
            else if (i == n-1 && m[i][j] != 'R')ans++;
            else if (j == c-1 && m[i][j] != 'D')ans++;
        }
    }

    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}