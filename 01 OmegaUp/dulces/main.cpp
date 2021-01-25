#include <iostream>
using namespace std;

int main() {
    int N,K,n[1000],suma=0,mayor=0,j=0,l=0,pos;
    cin>>N>>K;
    l=K;

    for (int i=0;i<N;i++) {
        cin>>n[i];
    }

    for (int i=0;i<N;i++) {
        pos=i;
        if (pos<(N-(K-1))) {
            j = i; // 1
            while (j < l) {
                suma += n[j];
                j++;
            }

            if (suma > mayor) {
                mayor = suma;

            }

            suma = 0;
            l++;
            }

    }
    cout<<mayor;



    return 0;
}