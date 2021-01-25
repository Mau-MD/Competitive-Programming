#include <iostream>
using namespace std;

struct empleado{
    char nombre[20];
    int edad;
    int salario;
}empleado[20];

int main () {
    int n,mayor=0,menor=99999,posm,posme;
    cout<<"Con cuantos empleados trabajara?"<<endl;
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"\nBienvenido empleado "<<i+1<<endl;
        cin.ignore();
        cout<<"\nNombre: "<<endl;
        cin.getline(empleado[i].nombre,20,'\n');
        cout<<"Edad:"<<endl;
        cin>>empleado[i].edad;
        cout<<"Salario:"<<endl;
        cin>>empleado[i].salario;
        if (empleado[i].salario>mayor){
            mayor=empleado[i].salario;
            posm=i;
        }
        if (empleado[i].salario<menor) {
            menor=empleado[i].salario;
            posme=i;
        }

    }

    cout<<"Nombre: "<<empleado[posm].nombre<<endl;
    cout<<"Edad: "<<empleado[posm].edad<<endl;
    cout<<"Salario: "<<empleado[posm].salario<<endl;

    cout<<"\nNombre: "<<empleado[posme].nombre<<endl;
    cout<<"Edad: "<<empleado[posme].edad<<endl;
    cout<<"Salario: "<<empleado[posme].salario<<endl;




    return 0;
}