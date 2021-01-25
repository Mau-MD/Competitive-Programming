#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int barrancas,vistas,max=-50001,aux=0;
    cin>>barrancas>>vistas;
    int emocion[barrancas], arraux[barrancas],j=-1,k=-1;

    for (int i=0;i<barrancas;i++) {
        cin>>emocion[i];

        if (i>0 && i<vistas) {
            arraux[++j]=emocion[i]-emocion[i-1];
            aux += arraux[j];
        }
        if (i>=vistas ){
            arraux[++j]=emocion[i]-emocion[i-1];
            aux += arraux[j];

            aux-=arraux[++k];
        }
        if (aux>max && i>=vistas-1) {
            max=aux;
        }
    }
cout<<max;


    return 0;
}