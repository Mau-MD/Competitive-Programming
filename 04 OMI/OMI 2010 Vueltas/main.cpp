#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m;
    int a[n][m],r[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    char vuelta;


    int posH, posV;
    int nH =0 , nV = 0;
    for (int i=0;i<k;i++)
    {
        cin>>vuelta;
        if (vuelta == 'H')nV++;
        else if (vuelta == 'V')nH++;
    }

    if (nH % 2 != 0 && nV % 2 != 0) // Ambos son impares
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                r[i][j] = a[(n-i)-1][(m-j)-1];
            }
        }
    }
    else if (nH % 2 == 0 && nV % 2 != 0) // El horizontal es par
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                r[i][j] = a[i][(m-j)-1];
            }
        }
    }
    else if (nH % 2 != 0 && nV % 2 == 0) // El vertical es par
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                r[i][j] = a[(n-i)-1][j];
            }
        }
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                r[i][j] = a[i][j];
            }
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
