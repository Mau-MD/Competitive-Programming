#include <iostream>
using namespace std;
int main() {
    int n, check=0;
    cin>>n;
    for (int i=2;i<n;i++) {
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                check++;
            }
        }
        if (check==2) {
            cout<<i<<endl;
        }
        check=0;
    }
    return 0;
}