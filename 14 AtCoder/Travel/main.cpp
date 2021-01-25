#include <bits/stdc++.h>
using namespace std;

int n, t;
int mat[10][10];

int ans;

void solve(int node, int val, int mask)
{
    if (mask == 0) // Tengo que ir a uno
    {
        int res = val + mat[node][0];
        if (res == t)ans++;
        return;
    }
    for (int i=1;i<n;i++)
    {
        if (mask & (1 << i)) // No lo hemos visitado
        {
            solve(i, val + mat[node][i], mask ^ (1 << i));
        }
    }
}

int main()
{

    cin>>n>>t;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    solve(0,0,(1<<n)-2);
    cout<<ans;
    return 0;
}
