#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void imprimir (int b[],int n) {
    for (int i=0;i<n;i++) {
        cout<<b[i]<<" ";
    }
}


void barajar(int a[],int n)
{
    srand(time(NULL));

    int k=-1,b[n];
    int aux = n;
    for (int i=0;i<n;i++)
    {
        int j = rand() % aux;
        aux--;

        b[++k] = a[j];

        for (int x = j; x < n ; x++)
        {
            a[x] = a[x + 1];
        }

        cout<<endl;


    }
    imprimir(b,n);

}


int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    barajar(a,n);

    return 0;
}

