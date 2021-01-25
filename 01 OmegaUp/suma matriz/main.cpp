#include <iostream>
#include <stdio.h>
using namespace std;



int main() {
    int n,m,t;
    scanf("%d",&n);
    scanf("%d",&m);
    int ma[n][m];


    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&ma[i][j]);
        }
    }

    scanf("%d",&t);
    int s,x1,x2,x3,x4,suma=0,num,cord;

    for (int h=0;h<t;h++) {
        scanf("%d",&s);
        if (s==0) {

            scanf("%d",&cord);
            x1=cord;
            scanf("%d",&cord);
            x2=cord;
            scanf("%d",&cord);
            x3=cord;
            scanf("%d",&cord);
            x4=cord;

            for (int i=x1-1;i<x3;i++) {
                for (int j=x2-1;j<x4;j++) {
                    suma+=ma[i][j];
                }
            }
            printf("%d", suma);
    printf("\n");
suma=0;

        }
        else if (s==1){
            scanf("%d",&x1);
            scanf("%d",&x2);
            scanf("%d",&num);
            ma[x1-1][x2-1]=num;
        }
    }


    return 0;
}