#include <iostream>
using namespace std;
int main () {
    int x=0,y=1,z,arreglo[30000],i=0,a=0,n;
    cin>>n;
    n-=1;
    while (x<=n) {
        z = x;
        x += y;
        y = z;
        i++;
        arreglo[i]=x;
    }
    i=0;
    while (a< n) {
        a++;
        if (a != arreglo[i] && a < arreglo[i]) {
            cout << a << " ";
        }
        if (a > arreglo[i]) {
            i++;
            a--;
        }
    }

    return 0;
}