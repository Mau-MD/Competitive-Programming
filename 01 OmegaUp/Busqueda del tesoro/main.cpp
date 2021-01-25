#include <bits/stdc++.h>

using namespace std;

int n, valor[16][16];

int busqueda(int y, int x)
{
    if (x == 8 && y == 8)return 0;
    else if (y+1 > 8) return busqueda(y, x+1) + valor[y*2][x];
    else if (x+1 > 8) return busqueda(y+1, x) + valor[y*2+1][x];
    else return max (busqueda(y, x+1) + valor[y*2][x], busqueda(y+1, x) + valor[y*2+1][x]);
}

// 3 7
int main()
{
    memset(valor, 0, sizeof(valor[0][0]) * 15 * 15);
    valor[0][3] = 4; valor[0][7] = 9;
    valor[1][6] = 3;
    valor[3][3] = 4;
    valor[5][1] = 3; valor[5][6] = 3;
    valor[7][2] = 2; valor[7][5] = 4; valor[7][7] = 4; valor[7][8] = 4;
    valor[10][1] = 3; valor[10][4] = 2;
    valor[11][3] = 6; valor[11][5] = 3;
    valor[13][0] = 9; valor[13][7] = 2;
    valor[14][3] = 3; valor[14][5] = 4;
    valor[15][4] = 3; valor[15][7] = 1;


    for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            cout<<valor[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<busqueda(0,0);
    return 0;
}
