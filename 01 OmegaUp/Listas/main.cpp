#include <bits/stdc++>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregar(Nodo *&, int);
void mostrar(Nodo *&);

int main () {
    Nodo *lista = NULL;

    int n,dato;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>dato;
        agregar(lista,dato);
    }
    mostrar(lista);



    return 0;
}

void agregar(Nodo *&lista, int n) {
    Nodo *nuevo = new Nodo();
    nuevo->dato=n;

    Nodo *aux1=lista;
    Nodo *aux2;

    while ((aux1!=NULL)&&(aux1->dato < n)) {
        aux2=aux1;
        aux1 = aux1->siguiente;
    }
    if (lista==aux1) {
        lista=nuevo;
    }
    else {
        aux2->siguiente = nuevo;
    }
    nuevo->siguiente = aux1;
}

void mostrar(Nodo *&lista) {
    while (lista!=NULL) {
        cout<<lista->dato<<" ";
        lista=lista->siguiente;
    }
}