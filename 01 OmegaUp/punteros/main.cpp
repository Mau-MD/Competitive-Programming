#include <bits/stdc++>
using namespace std;

void vocales(char *);

int main () {
   char cad[30];
   cin.getline(cad,30,'\n');

   for (int i=0;i<strlen(cad);i++) {
    cad[i]=tolower(cad[i]);
   }

   vocales(cad);




    return 0;
}

void vocales(char *j) {
    int a=0,e=0,i=0,o=0,u=0;
    while (*j) {
        switch (*j) {
            case 'a':a++;break;
            case'e':e++;break;
            case 'i':i++;break;
            case'o':o++;break;
            case'u':u++;break;
        }
        j++;
    }

    cout<<a<<endl;
    cout<<e<<endl;
    cout<<i<<endl;
    cout<<o<<endl;
    cout<<u<<endl;
}