#include <iostream>
using namespace std;

int main () {
    int x=0,c=1,n,i=0;
    while (n<=500) {
    n=x+c;
    c=x;
    x=n;
    }

return 0;
}