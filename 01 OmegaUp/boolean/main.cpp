#include <iostream>
#include <string.h>
using namespace std;
int main () {
    string a;
    cin>>a;
    int x=1,size=a.size();
    for (int j=0;j<a.size();j++) {
        for (int i = 0; i < size; i++) {
            cout<<a.substr(i, x)<<endl;
        }
        x++;size--;
    }
    return 0;
}