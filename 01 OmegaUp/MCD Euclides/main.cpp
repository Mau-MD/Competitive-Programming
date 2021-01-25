#include <iostream>
using namespace std;

int main () {
int a,b,MCD,r,aux;
cin>>a>>b;

if (a%b==0) {
    MCD=b;
}
else {
    while (a!=0) {
        if (b>a) {
            aux=a;
            a=b;
            b=aux;
        }
        if (a%b==0) {
            MCD=r;
            break;

        }
        r=a%b;
        a=b;
        b=r;

    }
}

cout<<MCD;
    return 0;
}