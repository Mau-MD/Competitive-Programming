#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int maxN = 1252;

int n,m;
int v[maxN][maxN];
char s[maxN][maxN];

pair<int,int>pPos;
int startingPosX, cakePosX;
int startingPosY, cakePosY;

struct solve
{
    int x;
    int y;
    int d;
    solve(int x1, int y1, int d1):x(x1),y(y1),d(d1){}
};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};


// 0 = derecha 1 = abajo 2 = izquierad 3 = arriba
void getPortalPos(int i, int j, int dir)
{
    switch(dir)
    {
        case 0:
        {
            while (j < m && s[i][j] != '#')j++;
            j--;
            break;
        }
        case 1:
        {
            while( i < n && s[i][j] != '#')i++;
            i--;
            break;
        }
        case 2:
        {
            while (j >= 0 && s[i][j] != '#')j--;
            j++;
            break;
        }
        case 3:
        {
            while (i >= 0 && s[i][j] != '#')i--;
            i++;
            break;
        }
    }

    pPos = make_pair(i,j);
}

int bfs()
{
    solve in(startingPosX,startingPosY,0);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == cakePosX && now.y == cakePosY)return now.d;
        if (v[now.y][now.x])continue;
        v[now.y][now.x] = true;
      //  cout<<now.y<<" "<<now.x<<endl;
        for (int i=0;i<4;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x >= 0 && x < m && y >= 0 && y<n)
            {
                if (s[y][x] != '#')
                {
                    solve next(x, y, now.d + 1);
                    Cola.push(next);
                }
                else if (s[y][x] == '#')
                {
                    for (int j=0;j<4;j++)
                    {
                        getPortalPos(now.y,now.x,j);
                        solve next(pPos.second, pPos.first, now.d+1);
                        Cola.push(next);
                    }
                }
            }
        }
    }
    return -1;
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(v,false,sizeof(v));
    cin>>n>>m; // Primero estoy leyendo filas y luego columnas
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>s[i][j];
            if (s[i][j] == 'O')
            {
                startingPosX = j;
                startingPosY = i;
            }
            if (s[i][j] == 'X')
            {
                cakePosX = j;
                cakePosY = i;
            }
        }
    }

    int ans = bfs();
    if (ans == -1)
    {
        cout<<"THE CAKE IS A LIE";
    }
    else
    {
        cout<<ans;
    }

    return 0;
}
