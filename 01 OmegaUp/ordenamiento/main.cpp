#include <iostream>
using namespace std;
int main () {
    int a[5]={6,4,5,7,2}, aux, pos;

    for (int i=0;i<5;i++) {
        pos = i; //5
        aux = a[i]; //2
        while (pos>0 && a[pos-1]>aux) { //7>5
            a[pos]=a[pos-1];  //7 ,7
            pos--; //4
        }
        a[pos]=aux; //7=2;
    }

    for (int i=0;i<5;i++) {
        cout<<a[i]<<" ";
    }


    return 0;
}