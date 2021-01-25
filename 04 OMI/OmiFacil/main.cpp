#include <iostream>
using namespace std;
int main() {
    int frecuencia, resultado;
    cin >> frecuencia;

    if (frecuencia > 540 && frecuencia < 1520 && frecuencia !=580) {
        if (frecuencia >= 540 && frecuencia < 740) {
            resultado = frecuencia - 580;
            if (resultado < (-1)) {
                resultado *= -1;
                cout << "adelante " << resultado;
            } else {


                cout << "atras " << resultado;
            }
        }

        if (frecuencia >= 740 && frecuencia < 1085 && frecuencia !=980) {
            resultado = frecuencia - 980;
            if (resultado < (-1)) {
                resultado *= -1;
                cout << "adelante " << resultado;
            } else {
                cout << "atras " << resultado;
            }

        }

    if (frecuencia >= 1085 && frecuencia < 1220 && frecuencia !=1190) {
        resultado = frecuencia - 1190;
        if (resultado < (-1)) {
            resultado *= -1;
            cout << "adelante " << resultado;
        } else {
            cout << "atras " << resultado;
        }
    }
    if (frecuencia >= 1220 && frecuencia < 1305 && frecuencia !=1250) {
        resultado = frecuencia - 1250;
        if (resultado < (-1)) {
            resultado *= -1;
            cout << "adelante " << resultado;
        } else {
            cout << "atras " << resultado;
        }
    }
    if (frecuencia >= 1305 && frecuencia !=1420) {
        resultado = frecuencia - 1420;
        if (resultado < (-1)) {
            resultado *= -1;
            cout << "adelante " << resultado;
        } else {
            cout << "atras " << resultado;
        }
    }
}
    else {
        cout<<"error";
    }



    return 0;
}