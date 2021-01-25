#include <iostream>
using namespace std;
int main () {
    int mayor, segundomayor = 0, x;
    cin >> x;
    mayor = x;
    while (x != 0) {
        cin >> x;
        if (x > mayor) {
            segundomayor = mayor;
            mayor = x;
        } else if (x > segundomayor && x < mayor) {
            segundomayor = x;
        }
    }

    cout << mayor << endl << segundomayor;

    return 0;
}