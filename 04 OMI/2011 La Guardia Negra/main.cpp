#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll maxN = 1e3+2;

ll sum[maxN][maxN];
ll mat[maxN][maxN];

ll getSum(int startingJ, int finalJ, int fila)
{
    if (startingJ == 0)return sum[fila][finalJ];
    return sum[fila][finalJ] - sum[fila][startingJ -1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n,m;
    cin>>n>>m;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            if (j>0)sum[i][j] = sum[i][j-1] + mat[i][j];
            else sum[i][j] = mat[i][j];
        }
    }

    int qq;
    cin>>qq;
    for (int q=0;q<qq;q++)
    {
        int y,x,d;
        cin>>y>>x>>d;
        if (d==0)
        {
            ll ans = mat[y][x];
            cout<<ans<<endl;
            continue;
        }
        //int distMax = 1 + (2 * (d-1));
        int jI = x - (d), jF = x + (d);
        ll ans = 0;
        int auxJI, auxJF;
        for (int pasos = 0, i = y; pasos < d + 1  && i >= 0; pasos++, i--)
        {
            auxJI = jI;
            auxJF = jF;
            jI = max(0,jI);
            jF = min(m-1,jF);
            ans+= getSum(jI,jF,i);
            jF = auxJF;
            jI = auxJI;
            jF--;
            jI++;
        }
        jI = x - d + 1, jF = x + d -1;
        for (int pasos = 0, i = y +1; pasos < d && i < n; pasos++, i++)
        {
            auxJI = jI;
            auxJF = jF;
            jI = max(0,jI);
            jF = min(m-1,jF);
            ans += getSum(jI, jF, i);
            jF = auxJF;
            jI = auxJI;
            jF--;
            jI++;
        }
        cout<<ans<<endl;

    }


    return 0;
}
