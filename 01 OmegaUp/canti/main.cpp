#include <iostream>

using namespace std;

int main() {
    int candidatos, votantes, votaciones[500][500],c[1000],j=0;
    cin>>candidatos>>votantes;


    for (int i=0;i<candidatos;i++) {
        for (j=0;j<votantes;j++) {
            cin>>votaciones[i][j];
        }
    }
    j=0;

    for (int i=0;i<candidatos;i++)
    {
        while (j!=votantes) {
        if (votaciones[i][j]==i+1) {
            c[i]++;
        }
        j++;
    }
        j=0;


        cout<<c[0];
        cout<<c[1];
        cout<<c[2];


    }




    return 0;

}