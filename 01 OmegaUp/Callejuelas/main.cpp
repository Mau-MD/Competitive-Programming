#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int grafo[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>grafo[i][j];
        }
    }
    cin>>k;

    int minimo = 99999, indice = 0, aristas_nulas = 0;
    for (int i=0;i<n;i++)
    {
        if (i >= n - aristas_nulas)break;
        for (int j=0;j<n;j++)
        {
            if (grafo[k][j] == 0 && i == 0)
            {
                aristas_nulas++;
                continue;
            }
            if (grafo[k][j] == 0)continue;
            if (grafo[k][j] < minimo)
            {
                minimo = grafo[k][j];
                indice = j;
            }
        }

        grafo[k][indice] = 99999;
        cout<<indice<<" ";
        minimo = 99999;
        indice = 0;
    }
    return 0;
}
