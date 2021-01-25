#include <iostream>
using namespace std;
int main () {
    int P,n[1000],i=0,L,I,y=0,k,m;
    cin>>P;
    k=P; //5
    n[i]=P%60;
    P/=60; //0

    if (P==0) {
        L=k/10; // 0
        I=k%10; //

        for (int j=1;j<=L;j++) {
            cout<<"L";
        }
        for (int j=1;j<=I;j++) {
            cout<<"I";
        }
        y=-1;

    }

        while (P>0) {

            i++;
            n[i] = P % 60;
            P /= 60;
            y = i;


        }

    m=y;

        while (y!=-1) {

            if (y!=m) {
                cout << ".";
            }
            m=50;
            P=n[y];
            L=P/10; //p 23 -- 2
            I=P%10; //3
            for (int j=1;j<=L;j++) {
                cout<<"L";
            }
            for (int j=1;j<=I;j++) {
                cout<<"I";
            }
            y--;


        }



    return 0;
}