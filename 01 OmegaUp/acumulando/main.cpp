#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    int n,par=0,im=0;
    cin>>n;
    int a[n];
    float prom=0;

    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]%2==0) {
            par+=a[i];
        }
        else im+=a[i];
        prom+=a[i];
    }

    cout<<par<<" "<<im<<" "<<prom/n<<endl;


    return 0;
}