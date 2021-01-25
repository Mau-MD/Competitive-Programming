#include <iostream>
using namespace std;
int main () {
    int matriz1[3][3],matriz2[3][3];

    cout<<"\nMatriz 1"<<endl;
    for (int i=0;i<3;i++) {
        for (int a=0;a<3;a++) {
            cin>>matriz1[i][a];
        }
        cout<<"\n";

    }
    cout<<"\nMatriz 2"<<endl;
    for (int i=0;i<3;i++) {
        for (int a=0;a<3;a++) {
            cin>>matriz2[i][a];
        }
        cout<<"\n";
    }
    cout<<"\nMatriz Producto"<<endl;
    for (int i=0;i<3;i++) {
        for (int a=0;a<3;a++) {
            cout<<matriz1[i][a]*matriz2[i][a]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}