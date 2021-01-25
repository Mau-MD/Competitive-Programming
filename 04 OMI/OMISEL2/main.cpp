#include <bits/stdc++.h>
using namespace std;

int suma (int y, int n,int s ) { //123 n=3
    int x;
    if (n==1) {
        x=1;
        s+=y/x;
        return s;
    }
    else {
        x = pow(10, n - 1);
        s += y/x;
        return suma(y%x,n-1,s);
    }


}

int main () {
    char a[1000];
    cin>>a;

    int n,y,s=0;
    n=strlen(a);
    y=atoi(a);
    cout<<suma(y,n,s);

    return 0;
}