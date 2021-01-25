#include <bits/stdc++.h>
const int MAX = 52;

bool visited[MAX][MAX];
bool map[MAX][MAX];
int n,m, xi, yi, xf, yf;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

using namespace std;

struct solve
{
    int x;
    int y;
    int d;
    solve (int x1, int y1, int d1):x(x1), y(y1), d(d1){}
};

int bfs()
{


    solve in(xi,yi,1);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == xf && now.y == yf)return now.d;
        if (visited[now.y][now.x])continue;
        visited[now.y][now.x] = true;

        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x >= 0 && x < m && y >= 0 && y < n && map[y][x] == 0)
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
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m;j++)
        {
            cin>>map[i][j];
        }
    }

   cin>>yi>>xi>>yf>>xf;
    cout<<bfs();
    return 0;
}
