#include <iostream>
#include <ttmath/ttmath.h>
using namespace std;

int main() {

    ttmath::UInt<2> a,b,i;
    cin>>a;
    b=1;
for(i=1;i<=a;i++){
    b=b*2;
}
    cout<<b;

return 0;
}