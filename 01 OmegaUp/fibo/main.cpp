#include <iostream>
using namespace std;
int main () {
    int n,fold1=1,fold2=1,fnew;
    cin>>n;
    cout<<fold1<<" "<<fold2<<" ";
    for (int i=0;i<n;i++) {
        fnew=fold1+fold2;
        fold1=fold2;
        fold2=fnew;
        cout<<fnew<<" ";
    }

    return 0;
}