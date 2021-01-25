#include <iostream>

using namespace std;

int main()
{
    int arreglo[10];
    int max = -1, pos;
    for (int i = 0; i < 10; i++)
    {
        cin >> arreglo[i];
        if (arreglo[i] > max)
        {
            max = arreglo[i];
            pos = i;
        }
    }
    cout << max << " " << pos;
    return 0;
}
