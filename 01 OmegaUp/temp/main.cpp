#include <iostream>
using namespace std;
int main () {
    int n, nm=0;
    while (n!=0) {
        cin>>n;
        if (n>nm) {
            nm=n;
        }
    }
    cout<<nm;

    return 0;
}