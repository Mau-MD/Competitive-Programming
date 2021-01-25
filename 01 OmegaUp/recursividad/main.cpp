#include <iostream>
using namespace std;

int MCD(int x, int y);
int MCM(int x, int y);

int mayor=0;

int main () {

    int n,mcd,pares[130000],p=0,mcm;
    cin>>n;
    int num[n];
    for (int i=0;i<n;i++) {
        cin>>num[i];
    }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0 && i == 0 || num[j] == num[i]) {}
                else {
                    mcd = MCD(num[j], num[i]);
                    if (mcd >= mayor) {
                        mayor = mcd;
                        pares[p] = num[j];
                        p++;
                        pares[p] = num[i];
                        p++;

                    }
                }

            }
        }

        int j = 0, mayorm = 0, k = 0;

        while (j < p) {
            {
                mcm = MCM(pares[j], pares[j + 1]);
                if (mcm > mayorm) {
                    mayorm = mcm;
                }
                j += 2;
            }
        }

        cout << mayorm;



    return 0;

}



int MCD (int x, int y) {
    int mayor=x,menor=y,r,fin;
    if (y>mayor) {
        mayor=y;
        menor=x;
    }
    if (mayor%menor==0) {
        fin=menor;
    }

    while (mayor%menor != 0){
        r=mayor%menor;
        if (menor%r==0) {
            fin=r;break;
        }
        mayor=menor;
        menor=r;

    }
    return fin;
}

int MCM(int x, int y) {
    int mcm;
    mcm=x*y/mayor;
    return mcm;
}