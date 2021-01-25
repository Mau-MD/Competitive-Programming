#include <iostream>

using namespace std;

int main()
{
    int arreglo[10];
    int min = 99999999, pos;
    for (int i = 0; i < 10; i++)
    {
        cin >> arreglo[i];
        if (arreglo[i] < min)
        {
            min = arreglo[i];
            pos = i;
        }
    }
    cout << min << " " << pos;
    return 0;
}
