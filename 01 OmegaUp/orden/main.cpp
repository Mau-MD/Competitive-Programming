#include <bits/stdc++>
using namespace std;

struct Tiempo {
    int horas,minutos,segundos;
}etapas[3],*var_etapas=etapas;

void leerDatos();
void total(Tiempo *);

int main () {
    leerDatos();
    total(var_etapas);

    return 0;
}

void leerDatos() {
    for (int i=0;i<3;i++) {
    cout<<"'\nCorredor "<<i+1<<" ";
    cin>>(var_etapas+i)->horas;
    cin>>(var_etapas+i)->minutos;
    cin>>(var_etapas+i)->segundos;
    cin.clear();
    }
}

void total(Tiempo *var_etapas) {
    int horas=0,minutos=0,segundos=0;
    for (int i=0;i<3;i++) {
        horas+=(var_etapas+i)->horas;
        minutos+=(var_etapas+i)->minutos;
        segundos+=(var_etapas+i)->segundos;
        if (minutos>=60) {
            minutos-=60;
            horas++;
        }
        if (segundos>=60) {
            segundos-=60;
            minutos++;
        }
    }

    cout<<horas<<" "<<minutos<<" "<<segundos;
}