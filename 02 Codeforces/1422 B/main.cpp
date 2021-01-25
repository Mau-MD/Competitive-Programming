#include <iostream>
using namespace std;
using ll = long long int;

void solve()
{
    int n,m;
    cin>>n>>m;
    ll mat[n][m];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    bool v[n][m];

    int xi = 0, xf = m-1, yi = 0, yf = n-1;
    int ans = 0;

    while (true)
    {
        int nums[] = {xi, xf, yi, yf};
        sort(nums, nums + 4);
        for (int i=0;i<4;i++)
        {
            ans +=
        }
    }

}
// Al valor del medio
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
