#include <bits/stdc++.h>
using namespace std;
double sueldo;

double decimal(double m, double h) {
    double min;

    min = m*50/3000;
    while (min>=10) {
        if (min >= 10) {
            h++;
            min -= 10;
        }
    }
    return min+h;
}

double suma(double horario[], int n) {
    double sum=0;
    for (int i=0;i<n;i++) {
        sum+=horario[i];
    }
    return sum;

}

double hora(double sum) {
    sueldo*=sum;
    int horas=sum;
    sum-=horas;
    sum=sum*300/5;

    cout<<"Horas totales: "<<horas<<":"<<sum<<endl;
    cout<<"Sueldo total: "<<sueldo<<endl;
}

int main () {
    int a,n;
    double x,m,h,op,*horario;
    horario = new double(15);
    cout<<"Selecciones el numero de dias"<<endl;
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"(1). 7:00 am"<<endl;
        cout<<"(2). 8:00 am"<<endl;
        cout<<"(3). 8:30 am"<<endl;

        cin>>a;
        if (a==1) {
            x=7;
        }
        else if (a==2) {
            x=8;
        }
        else {
            x=8.5;
        }

        cout<<"Ingrese su horario de salida"<<endl;
        cin>>h>>m;

        cout<<"Ingrese el sueldo por hora"<<endl;
        cin>>sueldo;

        horario[i]=decimal(m,h)-x;

    }

    hora(suma(horario, n));





    return 0;
}