#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arreglo[10];
    int menor = 999999, mayor = -1;

    for (int i = 0; i < 10; i++)
    {
        cin >> arreglo[i];
        menor = min(menor, arreglo[i]);
        mayor = max(mayor, arreglo[i]);
    }
    cout << menor << " " << mayor << " " << mayor - menor;

    return 0;
}
