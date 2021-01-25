#include <bits/stdc++.h>
#define MAX 1002
using namespace std;

int n, precios[MAX];
int memo[MAX][MAX];

int dp(int i, int j)
{
    if (memo[i][j]!=-1)return memo[i][j];
    if (i==j)return precios[i]*n;
    else
    {
        return memo[i][j] = max(dp(i+1,j)+precios[i]*(n-(j-i)), dp(i,j-1)+precios[j]*(n-(j-i)));
    }
}


int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>precios[i];
    }
    memset(memo,-1, sizeof(memo));
    cout<<dp(0,n-1);

    return 0;
}
