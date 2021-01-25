#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    bool mat[n][m];
    int p;
    cin>>p;
    memset(mat,false,sizeof(mat));

    for (int i=0;i<p;i++)
    {
        int x,y;
        cin>>y>>x;
        y--;
        x--;
        if (x >= 0 && y < n)mat[y][x] = true;
        if (x - 1 >=0 && y < n)mat[y][x-1] = true;
        if (x - 1>= 0 && y+1 < n)mat[y+1][x-1] = true;
        if (x >= 0 && y + 1 < n)mat[y+1][x] = true;


    }

    int ans = 0;
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<m-1;j++)
        {
            if (!mat[i][j])ans++;
          //  cout<<mat[i][j]<<" ";
        }
      //  cout<<endl;
    }
    cout<<ans;


    return 0;
}