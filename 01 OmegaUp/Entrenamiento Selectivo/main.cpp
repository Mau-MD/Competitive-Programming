#include <bits/stdc++.h>
using namespace std;
int m[7][7] = {{0,0,0,8,0,0,0}, {0,0,3,1,2,0,0}, {0,3,6,3,2,6,0}, {5,2,4,0,5,1,5},{0,3,4,2,2,5,0},{0,0,1,2,5,0,0},{0,0,0,4,0,0,0}};
bool v[7][7];

struct solve
{
    int x;
    int y;
    int d;
    int suma;
    solve(int x1, int y1, int d1, int suma1):x(x1),y(y1),d(d1),suma(suma1){};
};

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int bfs(int x, int y)
{
    solve in(x,y,0,0);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.d == 3)
        {
            cout<<now.suma<<endl;
            continue;
        }
        if (v[now.x][now.y])continue;
        v[now.x][now.y];
        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.x + dx[i];
            if (m[x][y] != 0 && x<7 && y<7)
            {
                solve r(x,y,now.d+1,now.suma+m[x][y]);
                Cola.push(r);
            }
        }
    }

}

int main() {
    cout<<bfs(3,3)<<endl;

    return 0;
}