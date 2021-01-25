#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const int maxN = 1502;
typedef pair<int,int> pii;

int n,m,k;
int mat[maxN][maxN];
int dp[maxN][maxN];
bool v[maxN][maxN];

void precalcular()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (i == 0 && j == 0)dp[i][j] = mat[i][j];
            else if (i == 0)dp[i][j] = mat[i][j] + dp[i][j-1];
            else if (j == 0)dp[i][j] = mat[i][j] + dp[i-1][j];
            else dp[i][j] = mat[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
}

ll querry(int i, int j)
{
    ll ans;
    ans = dp[i][j] - dp[i-k][j] - dp[i][j-k] + dp[i-k][j-k];
    return ans;
}

pii pos1, pos2;
bool bloqueado1(int i, int j)
{
    if (i >= (pos1.first - k + 1) && i <= (pos1.first + k - 1) && j >= (pos1.second - k + 1) && j <= (pos1.second + k - 1))return true;
    return false;
}

bool bloqueado2(int i, int j)
{
    if (i >= (pos2.first - k + 1) && i <= (pos2.first + k - 1) && j >= (pos2.second - k + 1) && j <= (pos2.second + k - 1))return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> mat[i][j];
        }
    }

    precalcular();

    vector <pair<int,pair<int,int> > > vals;
    for (int i = k - 1; i < n; i++)
    {
        for (int j = k - 1; j < m; j++)
        {
            vals.push_back({querry(i, j),{i,j}});
        }
    }

    sort(vals.begin(),vals.end());
    reverse(vals.begin(),vals.end());

    int ans = -1;
    for (int i=0;i<vals.size();i++)
    {
        pos1 = vals[i].second; // Posicion del primer bloque
        for(int j=i+1;j<vals.size();j++)
        {
            bool ok = false;
            if (bloqueado1(vals[j].second.first, vals[j].second.second))continue;
            pos2 = vals[j].second;
            for (int l = j + 1; l < vals.size();l++)
            {
                if (bloqueado1(vals[l].second.first, vals[l].second.second) || bloqueado2(vals[l].second.first, vals[l].second.second))continue;
                ans = max(ans, vals[i].first + vals[j].first + vals[l].first);
                break;
            }
        }
    }
    cout<<ans;

    return 0;
}
