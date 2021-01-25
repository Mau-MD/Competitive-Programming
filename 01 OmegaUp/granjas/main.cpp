#include <iostream>
using namespace std;
int main() {
    int n,anios=1;
    cin>>n;
    int a[n],b[n];

    for (int i=0;i<n;i++) {
        cin >> a[i];
        b[i]=a[i];
    }

for (int j=0;a[0]!=1;j++) {
    for (int i = 0; i < n; i++) {
        a[i] = b[a[i] - 1];

    }
    anios++;
}

cout<<anios;


    return 0;
}