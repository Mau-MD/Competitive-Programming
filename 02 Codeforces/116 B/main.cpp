#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char mat[n][m];
    for (int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for (int j=0;j<m;j++)
        {
            mat[i][j] = a[j];
        }
    }

    int dx[] = {0,-1,1,0};
    int dy[]= {-1,0,0,1};

    bool v[12][12];
    memset(v,false,sizeof(v));
    int ans = 0;
    int maxx = -1;
    int t = 2;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 'W')
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int y = i + dy[k];
                        int x = j + dx[k];

                        if (y >= 0 && y < n && x >= 0 && x < m && mat[y][x] == 'P' && !v[y][x])
                        {
                            v[y][x] = true;
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
        maxx = max(maxx, ans);

        swap(dx[1],dx[2]);
        ans = 0;
        memset(v,false,sizeof(v));
    }
    cout<<maxx;
    return 0;
}
