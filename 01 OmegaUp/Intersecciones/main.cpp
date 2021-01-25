#include <bits/stdc++.h>
using namespace std;
#define MAX 105
char m[MAX][MAX];
bool v[MAX][MAX];

int n,c;

struct solve
{
    int x;
    int y;
    int d;
    solve(int x1, int y1, int d1):x(x1),y(y1),d(d1){}
};

int dx_suma[] = {1,-1,0,0};
int dy_suma[] = {0,0,-1,1};

int dx_resta[] = {0,0};
int dy_resta[] = {-1,1};

int dx_div[] = {1,-1};
int dy_div[] = {0,0};

int bfs()
{
    solve in(0,0,1);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == n-1 && now.y == c-1)return now.d;
        if (v[now.x][now.y])continue;
        v[now.x][now.y]=true;

        if (m[now.x][now.y]=='+')
        {
            for (int i=0;i<4;i++)
            {
                int x = now.x + dx_suma[i];
                int y = now.y + dy_suma[i];

                if (x>=0 && x<n && y>=0 && y<c && m[x][y]!='*')
                {
                    solve r(x,y,now.d+1);
                    Cola.push(r);
                }
            }
        }
        if (m[now.x][now.y]=='-')
        {
            for (int i=0;i<2;i++)
            {
                int x = now.x + dx_resta[i];
                int y = now.y + dy_resta[i];

                if (x>=0 && x<n && y>=0 && y<c && m[x][y]!='*')
                {
                    solve r(x,y,now.d+1);
                    Cola.push(r);
                }
            }
        }
        if (m[now.x][now.y]=='|')
        {
            for (int i=0;i<2;i++)
            {
                int x = now.x + dx_div[i];
                int y = now.y + dy_div[i];

                if (x>=0 && x<n && y>=0 && y<c && m[x][y]!='*')
                {
                    solve r(x,y,now.d+1);
                    Cola.push(r);
                }
            }
        }

    }
    return -1;
}


int main ()
{
    cin>>n>>c;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }

    cout<<bfs()<<endl;
}
