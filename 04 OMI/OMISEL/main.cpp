#include <iostream>
using namespace std;

int divisores(int n,int b) {
    int a[100], w=0,suma=0;
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            a[w]=i;
            w++;
        }
    }
    for(int i=0;i<w;i++) {
        suma+=a[i];
    }
    if (suma==n) {
        cout<<n<<" ";
        divisores(n+1,b);
    }
    else if (n==b) {
        return 0;
    }
    else {
        return divisores(n+1,b);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin>>a;
    divisores(6,a);
    return 0;
}