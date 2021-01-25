#include <bits/stdc++>
using namespace std;

int main() {
    int n,*balanceo,pos=0,diferencia,diferenciab,conteo=0,*salto;

    cin>>n;

    balanceo= new int[n];
    salto=new int [n];

    for (int i=0;i<n;i++) {
        cin>>balanceo[i];
    }

    diferenciab=balanceo[pos+1]-balanceo[pos];

    for (int pos=0;pos<n-1;pos++) {

        diferencia=balanceo[pos+1]-balanceo[pos];
        salto[pos]=diferencia;



        if (diferencia==diferenciab){
            conteo++;
        }

    }

    if (conteo==n-1) {
        cout<<0;
    }







    return 0;
}