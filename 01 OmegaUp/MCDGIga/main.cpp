#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int a, n[300],i=1;
    cin>>a;
    n[0]=a;
    while (a!=1) {
        if (a%2==0) {
            a/=2;
            n[i]=a;
            i++;
        }
        else {
            a=(a*3)+1;
            n[i]=a;
            i++;
        }
    }

    sort(n,n+i);

    for (int j=0;j<i;j++) {
        cout<<n[j]<<" ";
    }

    return 0;
}