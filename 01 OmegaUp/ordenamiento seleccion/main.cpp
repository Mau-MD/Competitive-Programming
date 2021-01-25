#include <iostream>
using namespace std;
int main () {
    int a[5],dato,v=0,i=0;

    cout<<"dato"<<endl;
    cin>>dato;
    cout<<"arreglo"<<endl;
    for (int j=0;j<5;j++) {
    }        cin>>a[j];
    }

    while (v==0 && i<5) {
        if (a[i]==dato) {
            v++;
        }
        i++;
    }
    if (v==1) {
        cout<<"Su numero se encuentra en la posicion num "<<a[i-1];
    }
    else {
        cout<<":(";
    }

    return 0;
