#include <iostream>

using namespace std;

int main()
{
    int arreglo[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arreglo[i];
    }
    cout << arreglo[4] << " ";
    for (int i = 0; i < 4; i++)
    {
        cout << arreglo[i] << " ";
    }
    return 0;
}
