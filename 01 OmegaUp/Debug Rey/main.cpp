#include <iostream>
using namespace std;

int main() {
    int x, y,suma=1,k=2,i=2;
    cin>>x>>y;

    while (k<10000) {
        k=i;
        while (x % k == 0 && y % k == 0) {
            if (x % k == 0 && y % k == 0) {
                x /= k;
                y /= k;

                suma *= k;

            }
        }
        k=i;
        while (x%k==0 && y%k!=0) {
            if (x % k == 0 && y%k!=0) {
                x /= k;

                suma *= k;

            }
        }
        k=i;
        while (x%k!=0 && y%k==0) {
            if (x % k != 0 && y%k==0) {
                y /= k;

                suma *= k;

            }
        }
        while (x % k == 0 && y % k == 0) {
            if (x % k == 0 && y % k == 0) {
                x /= k;
                y /= k;

                suma *= k;
            }
        }

        i++;

    }

cout<<"El MCM es:"<<suma<<endl;




return 0;
}