#include <iostream>
using namespace std;

    int main () {
        int n,look,a,b,min;
        cin>>n>>look>>min;
        int x[look];

        for (int i=0;i<look;i++) {
            cin>>a>>b;
            x[i] =a-b;
        }
        sort (x,x+look);

        for (int i=0;i<min;i++) {
            n+=x[i];
        }

        cout<<n;


    return 0;
}