#include <iostream>
using namespace std;

int main () {
    int x,y,r=1;
    cin>>x>>y;
    for (int i =1; i<=y;i++) {
        r *= x;
    }
    cout<<r;

    return 0;
}