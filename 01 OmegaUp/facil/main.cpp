#include<iostream>
using namespace std;

int main () {
int filas,columnas,f,c;
cin>>filas>>columnas;
int m1[filas][columnas];

for (int i=0;i<filas;i++) {
    for (int j=0;j<columnas;j++) {
        cin>>m1[i][j];
    }
}

cin>>f>>c;
int m2[f][c],m3[filas][columnas];

    for (int i=0;i<f;i++) {
        for (int j=0;j<c;j++) {
            cin>>m2[i][j];
        }
    }

int x=0,y=0,z=0;
    for (int i=0;i<filas-f+1;i++) {
        cout<<"I "<<i<<endl;

        for (int j=0;j<columnas-c+1;j++) {
            cout<<"J "<<j<<endl;

            for (int h=i;h<f;h++) {
                for (int g=j;g<c;g++) {
                    cout<<"M1: "<< m1[h][g]<<endl;
                    cout<<"M2: "<< m2[x][y]<<endl;

                    if (m1[h][g]==m2[x][y]) {
                        z++;
                    }
                    y++;
                }
                x++;
                y=0;
            }
            x=0;
            y=0;
cout<<"\n";
        }
    }




















    for (int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            if (m3[i][j]!=1)m3[i][j]=0;
        }
    }
    for (int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            cout<<m3[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}