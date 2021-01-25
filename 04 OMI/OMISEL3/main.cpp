#include <bits/stdc++.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
};

Nodo *arbol=NULL;

Nodo *crearNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izq=NULL;
    nuevo_nodo->der=NULL;

    return nuevo_nodo;
}

void insertar(Nodo *&arbol, int n) {
    if (arbol==NULL) {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol=nuevo_nodo;
    }
    else {
        int valor = arbol->dato;
        if (n<valor) {
            insertar(arbol->izq,n);
        }
        else {
            insertar(arbol->der,n);
        }
    }

}

void preOrden(Nodo *arbol) {
    if (arbol==NULL) {
        return;
    }
    else {
        cout<<arbol->dato<<" ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

int main () {


    return 0;
}