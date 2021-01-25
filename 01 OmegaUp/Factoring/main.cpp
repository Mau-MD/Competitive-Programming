#include <iostream>
using namespace std;
int main () {
    int a;
    cin>>a;

    for (int i=2;a!=1;i++)
    {
        while (a%i==0)
        {
            cout<<i<<endl;
            a/=i;
        }
    }


    return 0;
}