//Leap Day
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if (n%4==0 && n%100 !=0) {
      cout<<"Leap year";
    }
    else if (n%400==0) {
        cout<<"Leap year";
    }
    else if (n<1582 && n%4==0) {
        cout<<"Leap year";
    }
    else {
        cout<<"No";
    }


    return 0;
}