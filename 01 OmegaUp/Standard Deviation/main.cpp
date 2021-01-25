#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n; float scuadrada=0, s=0,dato,res;
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>dato;
        s+=dato;
        scuadrada+=pow(dato,2);
    }

    float b = s*s, c = 1.0/n, d = b*c, e = n-1, f = scuadrada-d;
    cout<<scuadrada<<endl;
    cout<<c<<endl;
    res = sqrt(f/e);

    cout<<"Cantidad de valores: "<<n<<endl;
    cout<<"Average: "<<s/n<<endl;
    cout<<"Standard Deviation: "<<res<<endl;

    return 0;
}