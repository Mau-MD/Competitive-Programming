#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;
    cin >> filas >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = columnas - 1; j != -1; j--)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}