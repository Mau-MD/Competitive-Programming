#include <bits/stdc++.h>

#define MAX 302
int n, m;
bool t[MAX][MAX];
bool v[MAX][MAX];
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    string a;
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < m; j++)
        {
            if (a[j] == 'X')t[i][j] = true;
        }
    }
    int minimo = 9999, maximo = -1;
    bool dGlobal = false;
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<m;j++)
        {
            int posJ = j;
            int posI = i;
            int d = 0;

            if (!v[i][j] && t[i][j] == 1)
            {
                dGlobal = true;
                while (true)
                {
                    while (true)
                    {
                        d++;
                        v[posI][posJ] = true;
                        if (t[posI][posJ+1] != 1)break;
                        posJ++;
                    }
                    if (t[posI+1][posJ]!= 1)break;
                    posI++;
                    while (true)
                    {
                        d++;
                        v[posI][posJ] = true;
                        if (t[posI][posJ-1] != 1)break;
                        posJ--;
                    }
                    if (t[posI+1][posJ]!= 1)break;
                    posI++;
                }

                maximo = max(d,maximo);
                minimo = min(d,minimo);
            }
        }
    }
    if (!dGlobal)
    {
        maximo = 0;
        minimo = 0;
    }
    cout<<maximo<<endl;
    cout<<minimo;

    return 0;
}
