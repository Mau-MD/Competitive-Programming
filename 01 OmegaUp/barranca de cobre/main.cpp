#include <bits/stdc++.h>
using namespace std;

int main() {
    int torres,visitas,esp[50000],pos=0,suma=0,mayor=0;
    cin>>torres>>visitas;
    for (int i=0; i<torres;i++) {
        cin>>esp[i];
        if (i>0&&i<visitas) {
            suma=esp[i]-esp[i-1];
        }
    }
    suma=suma-esp[1]-esp[0];
cout<<suma;
    return 0;
}