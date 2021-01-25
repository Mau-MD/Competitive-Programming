#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char palabra[10000];
    int n,lon,p=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>palabra;
        lon=strlen(palabra);

        for (int j=0;j<strlen(palabra);j++) {
            if (palabra[j]!=palabra[lon-1]) {
                cout<<"NP"<<endl;
                p=0;
                break;
            }
            else {
                p=1;
            }
            lon--;
        }
        if (p==1) {
            cout<<"P"<<endl;
        }
        p=0;
    }

    return 0;
}