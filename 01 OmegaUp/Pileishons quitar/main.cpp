#include <bits/stdc++>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregar(Nodo *&, int);
void quitar(Nodo *&, int&);

int main () {
    Nodo *pila = NULL;
    int dato;
    cin>>dato;
    agregar(pila,dato);
    cin>>dato;
    agregar(pila,dato);

    cout<<"\nSacando elementos de la pila"<<endl;

    while (pila!=NULL) {
        quitar(pila,dato);
        if (pila !=NULL) {
            cout<<dato<<" , ";
        }
        else {
            cout<<dato<<".";
        }
    }

    return 0;
}

void agregar(Nodo *&pila,int n) {
    Nodo *nodo1 = new Nodo();
    nodo1->dato=n;
    nodo1->siguiente=pila;
    pila=nodo1;
}

void quitar(Nodo *&pila, int &n) {
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}