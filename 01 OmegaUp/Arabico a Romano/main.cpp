#include <iostream>
using namespace std;

void mil(int &n) {
    int aux=n/1000;

    switch(aux) {
        case 1:cout<<"M";break;
        case 2:cout<<"MM";break;
        case 3:cout<<"MMM";break;
    }
    n=n%1000;
}

void cien(int &n) {
    int aux=n/100;
    switch (aux) {
        case 1:cout<<"C";break;
        case 2:cout<<"CC";break;
        case 3:cout<<"CCC";break;
        case 4:cout<<"CD";break;
        case 5:cout<<"D";break;
        case 6:cout<<"DC";break;
        case 7:cout<<"DCC";break;
        case 8:cout<<"DCCC";break;
        case 9:cout<<"CM";break;
    }
    n=n%100;
}

void diez(int &n) {
    int aux=n/10;
    switch (aux) {
        case 1:cout<<"X";break;
        case 2:cout<<"XX";break;
        case 3:cout<<"XXX";break;
        case 4:cout<<"XL";break;
        case 5:cout<<"L";break;
        case 6:cout<<"LX";break;
        case 7:cout<<"LXX";break;
        case 8:cout<<"LXXX";break;
        case 9:cout<<"XC";break;
    }
    n=n%10;
}
void uno(int &n) {
    int aux=n/1;
    switch (aux) {
        case 1:cout<<"I";break;
        case 2:cout<<"II";break;
        case 3:cout<<"III";break;
        case 4:cout<<"IV";break;
        case 5:cout<<"V";break;
        case 6:cout<<"VI";break;
        case 7:cout<<"VII";break;
        case 8:cout<<"VIII";break;
        case 9:cout<<"IX";break;
    }
}
int main() {
    int n;
    cin>>n;
    if (n>1000) {
        mil(n);
    }
    if (n>100) {
       cien(n);
    }
    if (n>10) {
        diez(n);
    }
    if (n>1) {
        uno(n);
    }

    return 0;
}