#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int main () {
    int a=1,b=2,c=3;

    for (int i=1;i<=997;i++) {
        c=i;
        for (int j=2;j<=997;j++) {
            b=j;
            for (int k=3;k<=997;k++) {
                a=k;
                if ((pow(a,2)+pow(b,2))==pow(c,2)) {
                    if (a+b+c==1000) {
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    }
                }


            }

        }

    }



    return 0;
}