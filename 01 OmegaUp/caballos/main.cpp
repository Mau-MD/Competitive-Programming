#include <iostream>
using namespace std;

int main() {
    int min;
    cin>>min;
    int v1[min],v2[min],suma1=0,suma2=0,check=2,distmax=-9999;

    for (int i=0;i<min;i++) {
        cin>>v1[min]>>v2[min];
        suma1+=v1[min];
        suma2+=v2[min];
        if (suma1>suma2 && check!=0) {
            cout<<"Al minuto "<<i+1<<" el caballo 1 toma la delantera"<<endl;
            check=0;


        }
        if ((suma1-suma2)>distmax) {
            distmax=suma1-suma2;
        }
        if (suma2>suma1 && check !=1){
            cout<<"Al minuto "<<i+1<<" el caballo 2 toma la delantera"<<endl;
            check=1;

        }
        if ((suma2-suma1)>distmax) {
            distmax=suma2-suma1;
        }

        if (suma1==suma2 && check!=2) {
            cout<<"Al minuto "<<i+1<<" los caballos van empatados"<<endl;
            check=2;
        }
        if (i==min-1) {
            if (suma1 > suma2) {
                cout << "Termina la carrera y gana el caballo 1"<<endl;
            }
            else if (suma2>suma1) {
                cout<<"Termina la carrera y gana el caballo 2"<<endl;
            }
            if (suma2==suma1) {
                cout<<"Termina la carrera y empatan los caballos"<<endl;
            }
                cout<<"La distancia maxima entre los caballos fue de "<<distmax;
        }
    }





    return 0;
}