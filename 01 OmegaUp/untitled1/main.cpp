#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;
int main() {
    int cuenta = 0, minutos = 0, n;
    cin>>n;
    vector<int>arreglo;


    for (int i=0;i<n;i++)
    {
        int dato;
        cin>>dato;
        arreglo.push_back(dato);
    }

while (true) {
    for (int i = 0; i < n; i++) {
        auto it = find(arreglo.begin(), arreglo.end(), i + 1);
        if (it == arreglo.end())continue;
        int pos = distance(arreglo.begin(), it);
        if (arreglo.size() == 1)
        {
            cout<<minutos;
            return 0;
        }
        if (pos + 1 == arreglo.size())
        {

        }
        else if (arreglo[pos] > arreglo[pos + 1]) {
            arreglo.erase(arreglo.begin() + pos + 1);
            cuenta++;
        }
        if (i+1== n) {
            if (cuenta == 0) {
                cout << minutos;
                return 0;
            }
            cuenta = 0;
            minutos++;
            continue;
        }

    }
}

    return 0;
}