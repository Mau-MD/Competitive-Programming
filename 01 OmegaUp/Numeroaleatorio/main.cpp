#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int numero, aleatorio, conteo=0;

    srand(time(NULL));
    aleatorio = 1 + rand() %(100);

        do {
            cout<<"digite numero"<<endl;
            cin>>numero;
            if (numero>aleatorio) {
                cout<<"es menor"<<endl;
                conteo++;
            }
            if (numero<aleatorio) {
                cout<<"es mayor"<<endl;
                conteo++;
            }
        }

        while (numero!=aleatorio);
cout<<"intentos "<<conteo;



    return 0;
}