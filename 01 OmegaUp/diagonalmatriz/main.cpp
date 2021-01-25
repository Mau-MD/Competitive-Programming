/* 1 2 3
 * 4 5 6
 *
 * 1 4
 * 2 5
 * 3 6
 * */

#include <iostream>
using namespace std;
int main () {
    int matriz[100][100],filas,columnas,matriz2[100][100],n;
    cout<<"columnas"<<endl;
    cin>>columnas;
    cout<<"filas"<<endl;
    cin>>filas;

    for (int i=0;i<columnas;i++){
        for (int a=0;a<filas;a++){
            cin>>matriz[a][i];
        }
    }
    n=columnas;
    columnas=filas;
    for (int i=0;i<columnas;i++){
        for (int a=0;a<n;a++){
        }
    }



    return 0;
}