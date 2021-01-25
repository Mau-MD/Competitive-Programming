#include <bits/stdc++.h>
using namespace std;
#define MAX 255
int n;
bool v[MAX][MAX];
bool m[MAX][MAX];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

struct solve
{
    int x;
    int y;
    solve(int x1, int y1):x(x1),y(y1){}
};

int contador = 1;

int dfs(int i, int j)
{
    solve in(i,j);
    stack <solve>Pila;
    Pila.push(in);
    while (!Pila.empty())
    {
        solve now = Pila.top();
        Pila.pop();
        if (m[now.x][now.y]) continue;
        m[now.x][now.y]=true;
        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x>=0 && y>=0 && x<n && y<n && v[x][y]!=0)
            {
                solve r(x,y);
                if (m[x][y]) continue;
                contador++;
                Pila.push(r);
            }
        }
    }

    return contador;
}


int main() {
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (v[i][j]==1)
            {
                cout<<dfs(i,j)<<"\n";
            }
        }
    }




    return 0;
}