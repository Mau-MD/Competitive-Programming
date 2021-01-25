#include <iostream>
using namespace std;
int main () {
    int num[5] = {6,7,3,7,8},aux,pos;
    for (int i=0;i<5;i++) {
        while ((i>0)&& (num[i-1]>num[i]))
            num[i]=num[i-1];
    }


    return 0;
}