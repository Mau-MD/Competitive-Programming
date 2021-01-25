#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1,v2;
    int n, dato, minutos=0;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin >> dato;
        v1.push_back(dato);
    }

    while (true) {

        for (int i = 0; i < v1.size() - 1; i++) {
            if (i == 0)v2.push_back(v1[i]);
            if (v1[i] > v1[i + 1])v2.push_back(v1[i + 1]);
        }
        if (v1 == v2) {
            cout << minutos-1;
            return 0;
        }
        minutos++;
        v1.clear();
        for (int i = 0; i < v2.size(); i++) {
            if (i == 0)v1.push_back(v2[i]);
            if (v2[i] > v2[i + 1])v1.push_back(v2[i + 1]);
        }
        if (v1 == v2) {
            cout << minutos-1;
            return 0;
        }
        minutos++;
        v2.clear();
    }
}