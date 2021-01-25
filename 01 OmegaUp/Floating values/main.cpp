#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    float a[n],sum=0,menor=9999,mayor=0;

    for (int i=0;i<n;i++) {
        cin>>a[n];
        sum+=a[n];
        if (a[n]<menor) {
            menor = a[n];
        }
        if (a[n]>mayor) {
            mayor = a[n];
        }
    }

    cout<<"Average: "<<sum/n<<" Smallest: "<<menor<<" Largest: "<<mayor<<" Range: "<<mayor-menor;
    return 0;
}