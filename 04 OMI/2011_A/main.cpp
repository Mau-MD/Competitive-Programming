#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int maxN = 2010;

bool v[maxN][maxN];
char a[maxN][maxN];
int ans[maxN][maxN];

int n,m;

struct solve
{
    int x;
    int y;
    int d;
    solve(int x1, int y1, int d1):x(x1),y(y1),d(d1){}
};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void bfs(int y, int x)
{
    solve init(x,y,0);
    queue<solve>Cola;
    Cola.push(init);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (v[now.y][now.x])continue;
        v[now.y][now.x] = true;
        if (now.d < ans[now.y][now.x])
        {
            ans[now.y][now.x] = now.d;
        }
        else
        {
            continue;
        }
        for (int i=0;i<4;i++)
        {
            int newX = now.x + dx[i];
            int newY = now.y + dy[i];
            if (newX >= 0 && newX < m && newY >= 0 && newY < n )
            {
                if (a[newY][newX] == '.')
                {
                    solve r(newX, newY, now.d + 1);
                    Cola.push(r);
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
            ans[i][j] = 100000;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a[i][j] == 'G')
            {
                bfs(i,j);
                memset(v,false,sizeof(v));
            }
        }
    }

    int res = 0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a[i][j] == '.')res = max(res,ans[i][j]);
            //cout<<ans[i][j]<<" ";

        }
    }
    cout<<res;
    return 0;
}
