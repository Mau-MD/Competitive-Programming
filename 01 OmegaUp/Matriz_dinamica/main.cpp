#include <bits/stdc++>
using namespace std;

void leerDatos();
void trans(int **, int, int);

int **matriz,fil,col;

int main () {

    leerDatos();
    trans(matriz,fil,col);

    for (int i=0;i<fil;i++) {
        delete[] matriz[i];
    }
    delete [] matriz;

    return 0;
}

void leerDatos() {
    cin>>fil>>col;

    matriz=new int *[fil];
    for (int i=0;i<fil;i++) {
        matriz[i]=new int[col];
    }

    for (int i=0;i<fil;i++) {
        for (int j=0;j<col;j++) {
            cin>>*(*(matriz+i)+j);
        }
    }

}

void trans(int **matriz,int fil,int col) {
    for (int i=0;i<fil;i++) {
        for (int j=0;j<col;j++) {
            cout<<*(*(matriz+j)+i)<<" ";
        }
        cout<<"\n";
    }
}
