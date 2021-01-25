#include <iostream>
using namespace std;
int main () {
    int n,suma[100],menor=99999,mayor=0,par=0,impar=0,anterior=-1,duplicados[100],i=0,j=1;
    suma[0]=0;
    do {
        cin>>n;
        if (cin.fail())break;
        suma[j]=suma[j-1]+n;
        j++;
        if (n<menor){
            menor=n;
        }
        if (n>mayor) {
            mayor=n;
        }
        if (n%2==0) {
            par++;
        }
        else {
            impar++;
        }
        if (n==anterior){
            duplicados[++i]=n;
        }
        anterior=n;


    } while (!cin.fail());

    cout<<"Menor: "<<menor<<" "<<"Mayor: "<<mayor<<" "<<endl;
    cout<<"Par: "<<par<<" "<<"Impar: "<<impar<<" "<<endl;
    cout<<"Suma: ";
    for (int k=1;k<j;k++) {
        cout<<suma[k]<<" ";
    }
    cout<<"\nDuplicados: ";
    for (int k=1;k<i+1;k++) {
        cout<<duplicados[k]<<" ";
    }

    return 0;
}