#include <stdio.h>
#include <string.h>
int main () {
    char a[1000],b[1000],aux[1000],dist,j=0;
    int band=0;

    fgets(a,1000,stdin);
    fgets(b,1000,stdin);

    dist=strlen(a);

    for (int i=0;i<dist;i++) {
        strcpy(aux,a);
        a[0]=a[dist-2];
        a[1]=aux[0];
        for (j=2;j<dist-1;j++) {
            a[j]=aux[j-1];
        }
        if (strcmp(a,b)==0) {
            printf("Rotacion");
            band=1;
            break;
        }
    }
    if (band!=1) {
        printf("No Rotacion");
    }

}

