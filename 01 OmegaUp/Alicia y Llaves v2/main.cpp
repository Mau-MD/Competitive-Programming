#include <iostream>
using namespace std;
int main (){
    long N,M,L[10000],P[10000],i;

    cin>>N;
    for (long i=0;i<N;i++) {
        cin>>L[i];
        P[i]=i;
    }

    for (long j=0;j<N;j++) {
        while (i==N) {
            if (P[i]==L[j]) {
                cout<<j;
            }
            i++;
        }
        cout<<"0";
    }

    return 0;
}