#include <bits/stdc++.h>
#define MAX 2002
#define ll long long int
using namespace std;

int n,m;
char mapp[MAX][MAX];
ll dis[MAX][MAX];


struct solve
{
    int x;
    int y;
    int d;
    solve(int x1, int y1, int d1):x(x1), y(y1), d(d1){}
};

// y x
int bfs(int iY, int j, int guardNumber)
{
    bool v[MAX][MAX];
    memset(v,false,sizeof(v));
    vector<vector<int>>coord;

    solve init(j,iY,0);
    queue<solve>Cola;
    Cola.push(init);

    int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};

    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (v[now.y][now.x])continue;
        v[now.y][now.x] = true;


        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x >= 0 && x < m && y>=0 && y < n && mapp[y][x] != '#' && mapp[y][x] != 'G' )
            {
                solve r(x,y,now.d+1);
                Cola.push(r);
            }
        }
    }

    return -1;
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
            cin>>mapp[i][j];
        }
    }
    memset(dis,0,sizeof(dis));

    int gN = 0;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (mapp[i][j] == 'G')
            {
                bfs(i,j,gN);
                gN++;
            }
        }
    }

    cout<<ans;
    return 0;
}