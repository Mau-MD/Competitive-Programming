#include <bits/stdc++.h>
#define MAX 302
int n,m;
bool t[MAX][MAX];
bool v[MAX][MAX];
using namespace std;

struct solve
{
    int x;
    int y;
    solve(int x1, int y1):x(x1),y(y1){}
};

int bfs(int i, int j)
{
    solve q(j,i);
    queue<solve>Cola;
    Cola.push(q);

    int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};

    int d=0;

    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
       // if (v[now.y][now.x] == true)continue;
       // v[now.y][now.x] = true;
        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x>=0 && x<m && y>=0 && y<n && t[y][x] == 1 && !v[y][x])
            {
                d++;
                v[y][x] = true;
                solve r(x,y);
                Cola.push(r);
            }
        }
    }
    return d;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    string a;
    memset(t,0,sizeof(t));
    for (int i=0;i<n;i++)
    {
        cin>>a;
        for (int j=0;j<m;j++)
        {
            if (a[j] == 'X')t[i][j] = true;
        }
    }

    int minimo = 9999;
    int maximo  = -1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (!v[i][j] && t[i][j] == 1)
            {
                int r = bfs(i,j);
                minimo = min(minimo, r);
                maximo = max(maximo, r);
            }
        }
    }
    cout<<maximo<<'\n';
    cout<<minimo;
    return 0;
}
