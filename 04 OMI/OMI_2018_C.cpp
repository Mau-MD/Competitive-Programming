#include <bits/stdc++.h>
#define maxN 100002
using namespace std;
int n,m;
bool v[maxN][maxN];
bool visited[maxN][maxN];

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int c1 = 999999,c2 = -1,f1 = 9999999,f2 = -1;



void dfs(int i, int j)
{
    if (visited[i][j])return;
    visited[i][j] = true;

    c1 = min(c1,j);
    c2 = max(c2,j);
    f1 = min(f1,i);
    f2 = min(f2,i);

    for (int i=0;i<4;i++)
    {
        int x = j + dx[i];
        int y = i + dy[i];
        if (v[y][x] == 1)dfs(y,x);
    }
}

vector<pair<int,int>>columnas;
vector<pair<int,int>>filas;

int main()
{
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (!visited[i][j])
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

    return 0;
}