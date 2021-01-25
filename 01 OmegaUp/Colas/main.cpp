#include <bits/stdc++>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);


int main() {
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int n,s;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>s;
        agregarCola(frente,fin,s);
    }

    
    return 0;
}

void agregarCola(Nodo *&frente, Nodo *&fin, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;

    if (cola_vacia(frente)) {
        frente=nuevo_nodo;
    }
    else {
        frente->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;

    cout<<n<<" ";

}

bool cola_vacia(Nodo *frente) {
    return (frente==NULL)? true : false;
}