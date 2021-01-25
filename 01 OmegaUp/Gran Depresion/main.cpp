#include <bits/stdc++.h>
#define MAX 1002
using namespace std;
int b,q;
int val[MAX], w[MAX], dp[MAX][MAX];
int limt = 0;
void solve()
{

    for (int i=0;i<=b;i++)
    {
        for (int j=0;j<=limt;j++)
        {
            if (i == 0 || j == 0)dp[i][j] = 0;
            else if (w[i-1] <= j) dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j - w[i-1]]);
            else dp[i][j] = dp[i-1][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>b)
    {
        memset(dp, 0, sizeof(dp));
        memset(val,0,MAX);
        memset(w,0,MAX);

        for (int i = 0; i < b; i++)
        {
            cin >> val[i] >> w[i];
        }
        cin >> q;
        int lim[q], aux[q];
        for (int i = 0; i < q; i++)
        {
            cin >> aux[i];
            lim[i] = aux[i];
        }

        sort(lim, lim + q, greater<int>{});
        limt = lim[0];
        solve();
        long long int res = 0;
        for (int i = 0; i < q; i++)
        {
            res += dp[b][aux[i]];
        }
        cout << res << endl;
    }
    return 0;
}
