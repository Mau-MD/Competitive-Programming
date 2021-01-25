#include <bits/stdc++.h>
using namespace std;
const int maxN = 2002;
bool mat[maxN][maxN];
int n;

int maxD(int i, int j)
{
    int currSize = 1, decSize;
    int start = i - 1, end = i + 1;
    bool creciendo = true, completo = false, dec = false;
    int ans = 0;
    // CHECK IF WE CAN DO A 1 3
    if (j+1 > n)return -1;
    if (mat[i-1][j+1] && mat[i][j+1] && mat[i+1][j+1] && !mat[i-2][j+1] && !mat[i+2][j+1])
    {
        j++;
        currSize = 3, decSize = 1;

        while (true)
        {
            bool completo = false, dec = false;
            j++;

            int count = 0;
            for (int steps = 0, it = start + 1; steps < decSize; steps++, it++) // Buscar dec
            {
                if (mat[it][j])count++;
            }
            if (count == decSize)dec = true; // Me faltan analizar dos
            if (creciendo && mat[start-1][j] && mat[start][j] && mat[end+1][j] && mat[end][j] && !mat[start - 2][j] &&
                !mat[end + 2][j] && dec)
                completo = true;
            // Si hay completo, no puede haber decreciente
            if (!completo && dec && !mat[start][j] && !mat[end][j])
            {
                currSize -= 2;
                decSize = currSize - 2;
                start++, end--;

                if (creciendo)
                {
                    ans = currSize + 2;
                    creciendo = false;
                }
                if (currSize == 1)
                {
                    return ans;
                }
                continue;
            }
            else if (completo)
            {
                currSize += 2;
                decSize = currSize - 2;
                start--, end++;
                continue;
            }
            else break;
        }
    }
    else return -1;
}


int main()
{
    cin>>n;
    memset(mat,false,sizeof(mat));
    for (int i=1;i<=n;i++)
    {
        string a; cin>>a;
        for (int j=1;j<=n;j++)
        {
            if (a[j-1] == 'O')mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }

    int ans = -1;
    for (int i=2;i<=n-1;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (mat[i][j] && !mat[i - 1][j] && !mat[i + 1][j]) // Primer candidato
            {
                ans = max(ans, maxD(i,j));
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
