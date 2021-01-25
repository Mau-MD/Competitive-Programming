#include <bits/stdc++.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *arbol=NULL;

Nodo *nuevoNodo(int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->der=NULL;
    nuevo_nodo->izq=NULL;

    return nuevo_nodo;
}

void insertar(Nodo *&arbol,int n) {
    if (arbol==NULL) {
        Nodo *nuevo_nodo = nuevoNodo(n);
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

void mostrar(Nodo *arbol,int cont) {
    if (arbol==NULL) {
        return;
    }
    else {
        mostrar(arbol->der,cont+1);
        for (int i=0;i<cont;i++) {
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrar(arbol->izq,cont+1);
    }
}

bool busqueda(Nodo *arbol, int n) {
    if (arbol==NULL) {
        return false;
    }
    else if (n==arbol->dato) {
        return true;
    }
    else if (n<arbol->dato) {
    return busqueda(arbol->izq,n);
    }
    else {
    return busqueda(arbol->der,n);
    }
}

void mos(Nodo *arbol) {
    if (arbol==NULL) {
        return;
    }
    else {
        cout<<arbol->dato<<" ";
        mos(arbol->izq);
        mos(arbol->der);
    }

}


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,dato,cont=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>dato;
        insertar(arbol,dato);
    }
    mostrar(arbol,cont);

    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>dato;
        if (busqueda(arbol,dato)) {
            cout<<"Si"<<endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    mos(arbol);


    return 0;
}