#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double T,R,res,pot,Tk;
    cin>>T;
    Tk=(T-32)*0.55555+273;
    cout<<Tk<<endl;

    pot = 3318*((1/Tk)-0.003194888);

    R=pow(90225.14976,pot);

    res = 156300/(R+156300);
    cout<<res;
    if (res<0.5) {
        cout<<"Alarm will sound";
    }
    else {
        cout<<"Alarm will not sound";
    }

    return 0;
}