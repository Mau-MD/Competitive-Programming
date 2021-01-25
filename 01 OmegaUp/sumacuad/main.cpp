#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int suma=0,r;
    for (int i=1;i<=10;i++) {
        r=pow(i,2);
        suma += r;
    }
    cout<<suma;


    return 0;
}