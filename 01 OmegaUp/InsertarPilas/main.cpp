#include <bits/stdc++>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregar(Nodo *&, int );
void quitar(Nodo *&, int&);


int main() {
    Nodo *pila = NULL;

    int n=1;
    while (n!=0) {
        cin>>n;
        agregar(pila,n);
    }

    while (pila!=NULL) {
        quitar(pila,n);
        if (pila!=NULL){
            cout<<n<<" ";
        }
        else {
            cout<<n<<".";
        }
    }



    return 0;
}

void agregar(Nodo *& pila, int n) {
    Nodo *nodo1 = new Nodo();
    nodo1->dato=n;
    nodo1->siguiente=pila;
    pila=nodo1;
}

void quitar(Nodo *&pila, int &n) {
    Nodo *aux = pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}