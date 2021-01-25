#include <iostream>
#include <string.h>
using namespace std;
struct perDis {
    char nombre[20];
    bool discapacidad;
}perDis[100],CDis[100],SDis[100];
int main () {
    int n,j=0,k=0;
    cout<<"Ingrese el numero de personas: "<<endl;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++) {
        cout<<"\nPersona "<<i+1<<endl;
        cout<<"\nNombre: "<<endl;
        cin.getline(perDis[i].nombre,20,'\n');
        cout<<"Discapacidad? (1/0)"<<endl;
        cin>>perDis[i].discapacidad;
        cin.ignore();

        if (perDis[i].discapacidad==1) {
            strcpy(CDis[j].nombre,perDis[i].nombre);
            j++;
        }
        else {
            strcpy(SDis[k].nombre,perDis[i].nombre);
            k++;
        }
    }
    cout<<"Personas con discapacidad: "<<endl;
    for (int i=0;i<j;i++) {
        cout<<i+1<<" "<<CDis[i].nombre<<endl;
    }
    cout<<"\nPersonas sin discapacidad: "<<endl;
    for (int i=0;i<k;i++) {
        cout<<i+1<<" "<<SDis[i].nombre<<endl;

    }

    return 0;
}