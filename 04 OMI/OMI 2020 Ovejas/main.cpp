#include <bits/stdc++.h>
using namespace std;

const int maxN = 1002;

short mat[maxN][maxN];

struct solve {
    short x;
    short y;
    short d;
    solve(short x1, short y1, short d1):x(x1),y(y1),d(d1){}
};

queue<solve>Cola;

short dx[] = {1,1,0,-1,-1,-1,0,1};
short dy[] = {0,1,1,1,0,-1,-1,-1};

void bfs()
{
    while(!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();

        if (mat[now.y][now.x] != -1)continue;
        mat[now.y][now.x] = now.d;

        for (int i=0;i<8;i++)
        {
            short x = now.x + dx[i];
            short y = now.y + dy[i];
            if (x >= 0 && x < maxN && y >= 0 && y < maxN)
            {
                solve next(x,y,now.d+1);
                Cola.push(next);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin>>n>>q;

    for (int i=0;i<n;i++)
    {
        short x,y; cin>>x>>y;
        solve ov(x,y,0);
        Cola.push(ov);
    }

    memset(mat,-1,sizeof(mat));
    bfs();

    for (int i=0;i<q;i++)
    {
        int x,y; cin>>x>>y;
        cout<<mat[y][x]<<endl;
    }


    return 0;
}
