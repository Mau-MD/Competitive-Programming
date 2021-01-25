#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int maxN = 7;
bool mat[maxN][maxN];

int n,m,k;

int cuantos(int y, int x)
{
    int res = 0;
    for (int i = y - 1; i <= y; i++)
    {
        for (int j = x - 1; j <= x; j++)
        {
            if (mat[i][j])res++;
        }
    }
    return res;
}

struct cuadro
{
    bool on[4] = {false};
};

int cuantosAntes;

bool can(cuadro now, int y, int x)
{
    int cuentaActual = 0;
    for (int i=0;i<4;i++)
    {
        if (now.on[i])
        {
            cuentaActual++;
            if (i == 1)
            {
                if (mat[y-1][x-1])return false;
            }
            else if (i == 2)
            {
                if (mat[y-1][x])return false;
            }
            else if (i == 3)
            {
                if (mat[y][x-1])return false;
            }
            else if (i == 4)
            {
                if (mat[y][x])return false;
            }
        }
    }
    if (cuantosAntes + cuentaActual % 2 != 1)return false;
    return true;
}

// Representar como binario

void interact(cuadro now, int y, int x, bool acc)
{
    for (int i=0;i<4;i++)
    {
        if (now.on[i])
        {
            if (i == 1)
            {
                mat[y-1][x-1] = acc;
            }
            else if (i == 2)
            {
                mat[y-1][x] = acc;
            }
            else if (i == 3)
            {
                mat[y][x-1] = acc;
            }
            else if (i == 4)
            {
                mat[y][x] = acc;
            }
        }
    }
}

int ans = 0;
void solve(int y, int x)
{
    if (y == n - 1 && x == m - 1)
    {
        ans++;
        return;
    }
    cuadro now;
    for (int i=1;i<(1 << 4); i++)
    {

        for (int j=0;j<4;j++)now.on[j] = false;

        for (int j=0;j<4;j++)
        {
            if (i & (1 << j)) // Encendido
            {
                now.on[j] = true;
            }
        }

        cuantosAntes = cuantos(y,x);
        // Checar si es legal ponerlo
        if (can(now,y,x))
        {
            // Lo pongo
            interact(now,y,x,1);
            if (x + 1 == m)solve(y+1,0);
            else solve(y,x+1);
            interact(now,y,x,0); // Lo quito
        }
    }
}

int main()
{
    cin>>n>>m>>k;
    for (int i=0;i<k;i++)
    {
        int a,b,c;cin>>a>>b>>c;
        mat[b-1][a-1] = c;
    }

    solve(1,1);
    cout<<ans;
    return 0;
}
