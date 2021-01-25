#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matriz[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                cout << matriz[i][j] << " ";
            }
        }
    }
    return 0;
}
