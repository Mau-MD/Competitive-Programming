#include <iostream>
#include <queue>
#define MAX 22
using namespace std;

struct solve{
    int x;
    int y;
    int d;
    solve(int x1, int y1, int d1):x(x1),y(y1),d(d1){}
};

int val[MAX][MAX];
string jefes[MAX][MAX];
int n;

int dx[] = {1,0};
int dy[] = {0,1};

int bfs()
{
    solve in(0,0,1);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == n-1 && now.y == n-1)return now.d;
        for (int i=0;i<2;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < n)
            {
                if (jefes[y][x]=="b")
                {
                    solve r(x,y,now.d+val[y][x]);
                    Cola.push(r);
                }
                else if (jefes[y][x]=="l")
                {
                    solve r(x,y, now.d-val[y][x]);
                    Cola.push(r);
                }
                else
                {
                    solve r(x,y, now.d);
                    Cola.push(r);
                }
            }
        }

    }
}




int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);

    cin>>n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>val[i][j];
            cin.clear();

        }
        cin.clear();

    }

    string dato, aux;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        for (int j=0;j<n;j++)
        {
            aux = dato.substr(j,1);
            jefes[i][j] = aux;
        }

    }

    int vidas = bfs();
    if (vidas<=1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<vidas<<endl;
    }

    return 0;
}
