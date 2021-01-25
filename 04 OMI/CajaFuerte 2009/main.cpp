#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    char mat[n][n],obj[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>obj[i][j];
        }
    }

    int ox = -1,oy = -1;
    int ans = 0;

    for (int i=n;i>1;i-=2) // Esto solo me dice de cuanto es la matriz
    {
        ox++,oy++;
        int x = ox;
        int y = oy;
        int longitud = i * 2 + (i-2) * 2;

        queue<char> base, cerradura;
        // Primero a la derecha
        for (int mov = 0;mov<i-1;mov++)
        {
            x++;
            base.push(mat[y][x]);
            cerradura.push(obj[y][x]);
        }
        for (int mov = 0; mov < i-1;mov++)
        {
            y++;
            base.push(mat[y][x]);
            cerradura.push(obj[y][x]);

        }
        for (int mov = 0; mov < i - 1; mov++)
        {
            x--;
            base.push(mat[y][x]);
            cerradura.push(obj[y][x]);
        }
        for (int mov = 0; mov < i - 1; mov++)
        {
            y--;
            base.push(mat[y][x]);
            cerradura.push(obj[y][x]);
        }
        // Mi base que es el modular y cerradura que es el estatico

        int pasos = 0;

        if (base == cerradura)continue;
        while (true)
        {
            pasos++;
            char aux = base.front();
            base.pop();
            base.push(aux);
            //cout<<base<<endl;
            if (base == cerradura)break;
        }
        ans += min(pasos, longitud - pasos);
    }

    cout<<ans;

    return 0;
}