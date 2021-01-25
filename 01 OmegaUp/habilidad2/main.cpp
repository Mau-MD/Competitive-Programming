#include <iostream>
using namespace std;
int main () {


    int filas,columnas;
    cin>>filas>>columnas;
    int m1[filas][columnas],m3[filas][columnas];

    for (int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            cin>>m1[i][j];
        }
    }

    int f,c;

    cin>>f>>c;

    int m2[f][c];

    for (int i=0;i<f;i++) {
        for (int j=0;j<c;j++) {
            cin>>m2[i][j];
        }
    }

    int a=0,b=0,x=0,y=0,i=0,j=0,z=0;


    while (a<=filas-f && b<=columnas-c) {
        cout<<"A es igual a "<<a<<endl;
        for (i = a; i < f; i++) {
            for (j = b; j < c; j++) {

                cout<<"M1 "<<m1[i][j]<<endl;
                cout<<"M2 "<<m2[i][j]<<endl;

                if (m1[i][j]==m2[x][y]) {
                    z++;
                }
                y++;
            }
            x++;
            y=0;
        }
        if (z==f*c) {
            for (i=a;i<f;i++) {
                for (j=b;j<c;j++) {
                    m3[i][j]=1;
                }
            }
        }
        z=0;
        b++;
        if (b==columnas-c+1) {
            a++;
            b=0;
        }
    }

    for (i=0;i<filas;i++) {
        for (j=0;j<columnas;j++) {
            if (m3[i][j]!=1) {
                m3[i][j]=0;
            }
        }
    }
    for (i=0;i<filas;i++) {
        for (j=0;j<columnas;j++) {
           cout<<m3[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}