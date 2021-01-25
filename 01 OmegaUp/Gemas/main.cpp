#include <iostream>
#include <queue>
#include <algorithm>
int v[7][7] = {{0,0,0,8,0,0,0}, {0,0,3,1,2,0,0}, {0,3,6,3,2,6,0},{5,2,4,0,5,1,5},{0,3,4,2,2,5,0},{0,0,1,2,5,0,0},{0,0,0,4,0,0,0,}};
bool b[7][7];
using namespace std;

struct solve
{
    int x;
    int y;
    int d;
    int suma;
    int s1,  s2,  s3;
    solve(int x1, int y1, int d1, int suma1):x(x1),y(y1),d(d1),suma(suma1){}
};

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

int maxi = -1;

void bfs()
{
    solve n(3,3,0,0);
    queue<solve>Cola;
    Cola.push(n);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        b[now.y][now.x] = true;
        if (now.d == 3)
        {
            maxi = max(maxi, now.suma);
            cout<<now.s1<<" "<<now.s2<<" "<<now.s3<<"\n";
            continue;
        }
        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (v[y][x] != 0)
            {
                int new_suma = v[y][x] + now.suma;
                solve r(x,y,now.d+1,new_suma);
                if (now.d == 0)r.s1 = v[y][x];
                else if (now.d == 1)r.s2 = v[y][x];
                else r.s3 = v[y][x];
                Cola.push(r);
            }
        }

    }
}


int main()
{
    bfs();
    cout<<maxi;
    return 0;
}
