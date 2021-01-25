#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;

    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            cout<<"*";
        }

        cout<<" ";

        for (int j=1;j<=n;j++) {
            cout<<"*";
            if (i!=1 && i!=n && j==1) {
                cout<< setw(n-1);
                j=n-1;
            }
        }
        cout<<endl;
    }

    return 0;
}