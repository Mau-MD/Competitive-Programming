#include <iostream>
using namespace std;

int main (){
    int i, c=0;
    do {
        cin>>i;
        if (i!=0) {
            c+=1;
        }
        else {
        cout<<c; break;
        }
    }
    while (i!=0);

    return 0;
}