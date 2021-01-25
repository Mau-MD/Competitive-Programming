#include <iostream>
using namespace std;
int main () {
    int filas,columnas;
    cin>>filas>>columnas;
    int a,b,c,d,i,j,x,m[100][100];
    x=1;
    c=filas*columnas;
    a=0;
    b=columnas;
    d=filas;
    i=0;

    while (x<=c) {
        for (j=a;j<b;j++) {
            m[i][j]=x;
            x++;
        }
        for (i=a+1;i<d;i++) {
            m[i][j-1]=x;
            x++;
        }
        for (j=b-1;j>a;j--) {
            m[i-1][j-1]=x;
            x++;
        }
        for (i=d-1;i>a+1;i--) {
            m[i-1][j]=x;
            x++;
        }
        a++;
        b--;
        d--;

    }

    for (i =0;i<filas;i++) {
        for (j=0;j<columnas;j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}