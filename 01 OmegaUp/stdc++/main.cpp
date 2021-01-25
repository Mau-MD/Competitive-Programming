#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char pa[1000000]; //  ( = 40 ; ) = 41
    char c = '(';
    int iz=0, der=0;
    cin.getline(pa,1000000,'\n');
        for (int i = 0; i < strlen(pa);i++) {
            if (c==pa[i]) {
                iz++;
            }
            else {
                der++;
            }
        }

    if (iz==der) {
        cout<<"SI";
    }
    else {
        cout<<"NO";
    }

    return 0;
}