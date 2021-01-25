#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char p1[30],p2[30];
    cin>>p1>>p2;

    int posI=99,posJ=0,k=0,w=0;


    for (int i=0;i<strlen(p1);i++) {
        for (int j=0;j<strlen(p2);j++) {
            if (p2[j]==p1[i] && i<posI) {
                posI=i;
                posJ=j;
            }

        }
    }


    for (int i=0;i<strlen(p2);i++) {
        for (int j=0;j<strlen(p1);j++) {

             if (j==posI) {
                cout<<p2[k];
                k++;
            }
            else if (i==posJ) {
                cout<<p1[j];

            }
            else {
                cout << ".";
            }
        }
        cout<<"\n";
    }


    return 0;
}