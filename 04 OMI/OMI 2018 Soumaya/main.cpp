#include <bits/stdc++.h>
#define maxN 10002
using namespace std;
int n,m;
bool v[maxN][maxN];
bool visited[maxN][maxN];

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int c1 = 999999,c2 = -1,f1 = 9999999,f2 = -1;

bool isInterval(int a, int b, int c, int d)
{
    int maxx1 = max(a,c);
    int minn1 = min(b,d);

    return maxx1 == minn1+1 || maxx1<=minn1;
}

void dfs(int i, int j)
{
    if (visited[i][j])return;
    visited[i][j] = true;

    c1 = min(c1,j);
    c2 = max(c2,j);
    f1 = min(f1,i);
    f2 = max(f2,i);

    for (int k=0;k<4;k++)
    {
        int x = j + dx[k];
        int y = i + dy[k];
        if (x >= 0 && x < m && y >=0 && y < n && v[y][x] == 1)dfs(y,x);
    }
}

vector<pair<int,int>>columnas;
vector<pair<int,int>>filas;

int main()
{
    cin>>n>>m;
    string aux;
    for (int i=0;i<n;i++)
    {
        cin>>aux;
        for (int j=0;j<m;j++)
        {
            if (aux[j] == '0')v[i][j] = 0;
            else v[i][j] = 1;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (v[i][j] && !visited[i][j])
            {
                c1 = 999999,c2 = -1,f1 = 9999999,f2 = -1;
                dfs(i,j);
                columnas.push_back(make_pair(c1,c2));
                filas.push_back(make_pair(f1,f2));
            }
        }
    }

    for (int i=0;i<columnas.size();i++)
    {
        cout<<columnas[i].first<<" "<<columnas[i].second<<"  "<<filas[i].first<<" "<<filas[i].second<<endl;
    }

    bitset<402>used;
    for (int i = 0; i < columnas.size(); i++)
    {
        for (int j = i + 1; j < columnas.size(); j++)
        {
            if (isInterval(columnas[i].first, columnas[i].second, columnas[j].first, columnas[j].second) &&
                isInterval(filas[i].first, filas[i].second, filas[j].first, filas[j].second))
            {

            }
        }
    }

    return 0;
}