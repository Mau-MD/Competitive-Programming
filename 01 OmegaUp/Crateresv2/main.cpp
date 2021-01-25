#include <bits/stdc++.h>
using namespace std;
#define MAX 510
int n,c,rocas,num=0;
int m[MAX][MAX];
bool v[MAX][MAX];

void dfs(int y, int x)
{
    rocas+=m[y][x];
    if (m[y][x+1] != 0 && y >= 0 && y<c && x+1>=0 && x+1<n && v[y][x+1]!=true)
    {
        v[y][x+1]=true;
        dfs(y,x+1);
    }
    if (m[y+1][x] != 0 && y+1 >= 0 && y+1<c && x>=0 && x<n && v[y+1][x]!=true)
    {
        v[y+1][x]=true;
        dfs(y+1,x);
    }
    if (m[y][x-1] != 0 && y >= 0 && y<c && x-1>=0 && x-1<n && v[y][x-1]!=true)
    {
        v[y][x-1]=true;
        dfs(y,x-1);
    }
    if (m[y-1][x] != 0 && y-1 >= 0 && y-1<c && x>=0 && x<n && v[y-1][x]!=true)
    {
        v[y-1][x]=true;
        dfs(y-1,x);
    }
}

int rocas_max = 0, num_crater=0;


int main() {
    cin>>n>>c;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (m[i][j]!=0 && v[i][j]!=true)
            {
                rocas=0;
                num++;
                dfs(i,j);
                if (rocas > rocas_max)
                {
                    rocas_max = rocas;
                    num_crater = num;
                }
            }
        }
    }

    cout<<num_crater<<" "<<rocas_max;
    return 0;
}