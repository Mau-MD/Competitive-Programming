#include <bits/stdc++.h>
using namespace std;
const int maxN = 102;

int n;
bool mat[maxN][maxN];
bool v[maxN];
bool dom[maxN][maxN];


// La i es estatica
void dfs(int i, int u) // Nodo que estoy buscando y que tengo que desactivar
{
    dom[i][u] = false; // Nodo actual
    v[u] = true;
    for (int j=0;j<n;j++)
    {
        if (mat[u][j] && !v[j] && j != i)
        {
            dfs(i,j);
        }
    }
}

void solve()
{
    memset(mat,false,sizeof(mat));
    memset(dom,true,sizeof(dom));

    for (int i=0;i<n;i++)
    {
        mat[0][i] = true;
    }
    for (int i=0;i<n;i++)
    {
        mat[i][i] = true;
    }

    cin>>n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    for (int i=1;i<n;i++)
    {
        memset(v,false,sizeof(v));
        dfs(i,0);
    }
    for (int i=0;i<2*n+1;i++)
    {
        if (i%2 == 0)
        {
            cout<<'+';
            for (int j=0;j<2*n-1;j++)
            {
                cout<<'-';
            }
            cout<<'+'<<endl;
        }
        else
        {
            cout<<'|';
            for (int j=0;j<n;j++)
            {
                if (dom[i][j])cout<<"Y|";
                else cout<<"N|";
            }
            cout<<endl;
        }
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
