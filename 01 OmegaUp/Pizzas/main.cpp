#include <iostream>
using namespace std;
int main () {
    int n,m,k,pizza=0;
    float sobrante=0;
    cin>>n>>m>>k;

    //3 3 2
    //1 pizza 2 pizza
    //sobrante 5

    //4 pizza


    pizza=pizza+m/2;
    if (m%2 !=0) {
        pizza++;
        sobrante+=5;
    }

    pizza=pizza+k;
    sobrante+=2.5*k;


    n=n-sobrante/2.5;
    if (n>0) {
            pizza=pizza+n/4;
            if (n%4 != 0) {
                pizza++;
            }
        }


    cout<<pizza;


    return 0;
}