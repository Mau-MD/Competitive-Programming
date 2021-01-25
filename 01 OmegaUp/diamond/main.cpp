#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,aux;
    cin>>n;
    aux=-1;

    for (int i=1;i<=n;i++) {
        aux+=2;
        cout<<setw(n-i+1);
        for (int j=1;j<=aux;j++) {
            cout<<"*";
        }
        cout<<endl;

    }
    for (int i=n-1;i!=0;i--) {
        aux-=2;
        cout<<setw(n-i+1);
        for (int j=1;j<=aux;j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}