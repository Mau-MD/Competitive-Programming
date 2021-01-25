#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cin>>a>>b;
    if (a>b) {
        c=a/b;
        a=a%b;
        cout<<c<<" "<<a<<"/"<<b;
    }


    return 0;
}