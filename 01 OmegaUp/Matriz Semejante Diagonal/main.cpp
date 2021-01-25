#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matriz[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>matriz[i][j];
        }
    }

    int base = matriz[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i == j && base != matriz[i][j]) || matriz[i][j] != matriz[j][i])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"SI";
    return 0;
}
