#include <iostream>
#define MAX 102
int n,m;
int mapa[MAX][MAX];

// 1  2 3 4
/*
 *                 2
 *                 -
 *            3 ------- 1
 *                 -
 *                 4
 */
using namespace std;

void solve(int x, int y, int direccion)
{
    if (x<0 || y<0 || x>= m || y>= n)
    {
        cout<<"te perdiste";
    }
    else if (x == m-1 && y == n-1)
    {
        cout<<"llegaste";
    }
    else if (mapa[y][x] == 1)
    {
        switch (direccion)
        {
            case 1:
            {
                solve(x, y + 1, 4);
                break;
            }
            case 4:
            {
                solve(x - 1, y, 3);
                break;
            }
            case 3:
            {
                solve(x, y - 1, 2);
                break;
            }
            case 2:
            {
                solve(x + 1, y, 1);
                break;
            }
        }
    }
    else if (mapa[y][x] == 2)
        {
            switch (direccion)
            {
                case 1:
                {
                    solve(x, y - 1, 2); break;
                }
                case 2:
                {
                    solve(x-1, y, 3); break;
                }
                case 3:
                {
                    solve(x,y+1,4); break;
                }
                case 4:
                {
                    solve(x+1,y,1);break;
                }
            }
        }
        else if (mapa[y][x] == 3)
        {
            switch (direccion)
            {
                case 1:
                {
                    solve(x-1,y,3); break;
                }
                case 3:
                {
                    solve(x+1,y,1); break;
                }
                case 2:
                {
                    solve(x,y+1,4); break;
                }
                case 4:
                {
                    solve(x,y-1,2); break;
                }
            }
        }
        else if (mapa[y][x] == 0)
        {
            switch (direccion)
            {
                case 1:
                {
                    solve(x+1,y,1); break;
                }
                case 2:
                {
                    solve(x,y-1,2); break;
                }
                case 3:
                {
                    solve(x - 1, y, 3); break;
                }
                case 4:
                    solve(x,y+1,4); break;
            }
        }
}


int main()
{

    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mapa[i][j];
        }
    }

    solve(0,0,1);


    return 0;
}
