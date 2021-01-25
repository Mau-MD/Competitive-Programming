#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    int matriz[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>matriz[i][j];
        }
    }

    for (int k = m-1; k >= 0; --k)
    {
        for (int i = 0; i < m; ++i)
        {
            cout<<matriz[k][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
