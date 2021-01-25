#include <iostream>
using namespace std;
int v[1000],a[1000];

int suma(int n, int i) {
    if (n<1) {
        return n;
    }
    else {
        return suma(n - 1, i+1) + v[i];
    }
}
int main() {
    int n,i,mayor=0,pos;
    cin>>n;
    for (i=0;i<n;i++) {
        cin>>v[i];
    }
for (int j=0;j<n;j++) {
    a[i]=suma(i,j);
}

for (i=0;i<20;i++) {
    a[i]=0;
}

int j=0;
for (i=0;i<20;i++) {
    for (int h=0;h<n;h++) {
        if (a[h] % i == 0) {
            a[h]++;
        }
        else {

        }
    }
}

for (i=0;i<n;i++) {
    if (a[i]>mayor) {
        mayor=a[i];
        pos=i;
    }
}

cout<<v[0]/pos;



    return 0;
}