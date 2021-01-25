#include <bits/stdc++.h>
using namespace std;
#define MAX 510
int n,c, rocas=0;
int m[MAX][MAX];
bool v[MAX][MAX];

struct solve
{
    int x;
    int y;
    solve(int x1, int y1):x(x1),y(y1){}
};

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};


int crater_principal=0, rocas_mayor=0,num=0;

int dfs(int i, int j)
{
    num++;
    solve in(i,j);
    queue<solve>Pila;
    Pila.push(in);
    while (!Pila.empty())
    {
        solve now = Pila.front();
        Pila.pop();
        if (v[now.x][now.y]==true)continue;
        v[now.x][now.y]=true;
        rocas += m[now.x][now.y];
        cout<<rocas<<endl;
        for (int k=0;k<4;k++)
        {
            int x = now.x + dx[k];
            int y = now.y + dy[k];
            if (x>=0 && x<n && y>=0 && y<c && m[x][y]!=0)
            {
                solve r(x,y);
                Pila.push(r);
            }
        }
    }
    return num;
}

bool vacio()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            if(m[i][j]!=0)return false;
        }
    }
    return true;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>c;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }

    if (vacio())
    {
        cout<<"0 0";
        return 0;
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (m[i][j] != 0 && v[i][j]!=true)
            {
                rocas=0;
                int num = dfs(i,j);
                if (rocas>rocas_mayor)
                {
                    rocas_mayor=rocas;
                    crater_principal = num;
                }
            }
        }
    }

    cout<<crater_principal<<" "<<rocas_mayor;

    return 0;
}