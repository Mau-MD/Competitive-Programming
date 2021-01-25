#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int maxN = 3 * 1e5 + 2;
int n;
int a[maxN];

int res(int i, bool rest, int base)
{
    if (rest) // Tenemos que restar
    {
        for (int j = i+1; j<n;j++)
        {
            base - res(j, !rest, base);
        }
    }
    else
    {
        for (int j = i+1; i<n;j++)
        {   

        }
    }
}


void solve()
{
    cin>>n;
}

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
