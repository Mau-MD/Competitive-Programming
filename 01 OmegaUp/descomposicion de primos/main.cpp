#include <iostream>
using namespace std;

int main () {
    int n;
cin>>n;
    for (int i=2;i>1;i++) {
        while (n%i==0) {
            n/=i;
            cout<<i<<endl;

        }
    }
    return 0;
}