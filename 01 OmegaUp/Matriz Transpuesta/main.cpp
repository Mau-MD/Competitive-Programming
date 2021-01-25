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
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << matriz[j][i] << " ";


        }
        cout << "\n";
    }


    return 0;
}