#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k, dato;
    cin>>n>>m>>k;
    int op[k], mat[n][m];

    for (int i=0;i<k;i++)
    {
        cin>>dato;
        op[i] = dato;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    for (int i=0;i<k;i++)
    {
        if (op[i] == 1) // Fila a la ultima
        {
            for (int y = 0; y < n - 1; y++)
            {
                for (int x = 0; x < m; x++)
                {
                    swap(mat[y][x], mat[y + 1][x]);
                }
            }
        } else if (op[i] == 2)
        {
            for (int y = n - 1; y != 0; y--)
            {
                for (int x = 0; x < m; x++)
                {
                    swap(mat[y][x], mat[y - 1][x]);
                }
            }
        } else if (op[i] == 3)
        {
            for (int x =0;x<m-1;x++)
            {
                for (int y = 0;y<n;y++)
                {
                    swap(mat[y][x],mat[y][x+1]);
                }
            }
        }
        else if (op[i] == 4)
        {
            for (int x=m-1;x!=0;x--)
            {
                for (int y=0;y<n;y++)
                {
                    swap(mat[y][x], mat[y][x-1]);
                }
            }
        }


    }
for (int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}


}
