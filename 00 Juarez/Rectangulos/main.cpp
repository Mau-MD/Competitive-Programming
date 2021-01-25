#include <bits/stdc++.h>
typedef pair<int,int> pii;
using namespace std;
const int maxN = 1000;
int n;
vector<pii>rect;
int memo[maxN][maxN];


int solve(int ancho, int pos)
{
    if (memo[pos][ancho] != -1)return memo[pos][ancho];
    if (pos >= n)return 0;
    else return memo[pos][ancho] = max(solve(rect[pos].first, pos+1) + abs(rect[pos].first - ancho) + rect[pos].second,
                    solve(rect[pos].second, pos+1) + abs(rect[pos].second - ancho) + rect[pos].first);
}

int main()
{
    cin>>n;
    memset(memo, -1, sizeof(memo));
    for (int i=0;i<n;i++)
    {
        int a,b; cin>>a>>b;
        rect.push_back({a,b});
    }

    cout<<max(solve(rect[0].first, 1) + rect[0].second ,solve(rect[0].second, 1) + rect[0].first);

    return 0;
}
