#include <iostream>
using namespace std;
int main () {
    int filas, columnas,c=0;
    int b=0;
    cin >> filas >> columnas;
    int a=columnas-1;
    int y;
    if (filas%2==0) {
        y=filas/2;
    }
    else {
        y=filas;
    }

    for (int x=0;x<y;x++) {
        for (int i = 0; i < columnas; i++) {
            cout << '#';
        }
        c++;
        if (c==filas) {
            break;
        }
        cout << '\n';
        for (int i = 0; i < columnas; i++) {
            if (i != a) {
                cout << '.';
            } else {
                cout << '#';
            }
        }
        c++;
        cout << '\n';
        if (b == 0) {
            b = 1;
            a = 0;

        } else {
            a = columnas - 1;
            b = 0;

        }
    }
}


/*
    for (int i = 0; i < columnas; i++) {
        cout << '#';
    }
    cout<<'\n';
    for (int i = 0; i < columnas; i++) {
        if (i!=0) {
            cout << '.';
        }
        else {
            cout<<'#';
        }
    }
        return 0;


}
 */

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int filas,columnas,i=0,j=0;
    cin>>filas>>columnas;
char m[filas][columnas];
    int b,c;

    b=0;
    c=2;
    for (int x=0;x<filas/2;x++) {
        for (j = 0; j < columnas; j++) {
            m[i][j] = '#';
        }
        for (i = b; i < c; i++) {
            m[i][j - 1] = '#';
        }
        c = i + 2;

        for (j = 0; j < columnas; j++) {
            m[i][j] = '#';
        }
        j=0;
        for (i ; i < c; i++) {
            m[i][j] = '#';
        }
        b = i;
        c = i + 2;

    }





    for ( i=0;i<filas;i++) {
        for ( j=0;j<columnas;j++) {
            if (m[i][j]!='#') {
                m[i][j]='.';
            }
        }
    }

    for ( i=0;i<filas;i++) {
        for ( j=0;j<columnas;j++) {
            cout<<m[i][j];
        }
        cout<<"\n";
    }





    return 0;
}

 */