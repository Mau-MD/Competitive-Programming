#include <iostream>
using namespace std;
int main() {
    int n,m,valles=0;
    cin>>n>>m;
    int matriz[n][m];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>matriz[i][j];
        }
    }


    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (matriz[i][j]==0 && (i!=0 && i!=m-1) && (j!=0 && j!=m-1))
            {
                if (matriz[i][j-1]==1 && matriz[i][j+1]==1 && matriz[i-1][j]==1 && matriz[i+1][j]==1)
                {
                    valles++;
                }
            }
        }
    }

    cout<<valles;
    return 0;
}