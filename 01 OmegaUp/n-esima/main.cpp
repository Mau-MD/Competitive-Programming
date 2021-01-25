#include <iostream>
#include <math.h>
using namespace std;
int main () {

    long long r=1,n,x=2;
    cin>>n;

    cout<<n-62;

    if (n>62) {
        for (int i = 1; i <= n; i++) {
            r = r * x;
        }
    }

cout<<r;

    return 0;
}