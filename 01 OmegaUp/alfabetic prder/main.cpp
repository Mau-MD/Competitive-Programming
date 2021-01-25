#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n,pos;
    char alfabeto[25];
    char aux[25];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>alfabeto[i];
    }


    for (int i=0;i<n;i++) {
        pos=i;
        aux[i]=alfabeto[i];

        while ((pos>0) && (strcmp(&alfabeto[pos-1],&aux[i])>0)) {
            alfabeto[pos]=alfabeto[pos-1];
            pos--;
        }
        alfabeto[pos]=aux[i];
    }
    for (int i=0;i<n;i++) {
        cout<<alfabeto[i];
    }
    return 0;
}