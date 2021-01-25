#include <iostream>
using namespace std;

int main() {
    int serie[1000],i=2,fin=0;
    cin>>serie[0]>>serie[1];
    cout<<serie[0]<<" "<<serie[1]<<" ";

    while (fin==0) {
        serie[i] = serie[i - 1] + serie[i - 2];
        if (serie[i] >= 10) {
            serie[i] -= 10;
        }
        cout<<serie[i]<<" ";

        if (serie[i]==serie[1] && serie[i-1]==serie[0]) {
            fin++;
        }
        i++;
    }
    cout<<"\n"<<i-2;




    return 0;
}