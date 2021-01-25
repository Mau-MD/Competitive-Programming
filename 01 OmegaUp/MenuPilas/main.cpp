#include <bits/stdc++>
using namespace std;
struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregar(Nodo *&, char);
void quitar(Nodo *&, char &);



int main() {
    Nodo *pila = NULL;
    int s=0;
    char a;
    while (s!=3) {
        cout << "\n\n1.Insertar caracter a la pila: "<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>s;
        if (s==1) {
            cout<<"Ingrese el dato: "<<endl;
            cin>>a;
            agregar(pila,a);
        }
        else if (s==2) {
            cout<<"\nMostrando elementos"<<endl;
            while (pila!=NULL) {
                quitar(pila,a);
                if (pila!=NULL) {
                    cout<<a<<" ";
                }
                else {
                    cout<<a<<".";
                }
            }

        }

    }

    return 0;
}

void agregar(Nodo *&pila, char n) {
    Nodo *nodo1 = new Nodo();
    nodo1->dato=n;
    nodo1->siguiente=pila;
    pila=nodo1;
}

void quitar (Nodo *&pila, char &n) {
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}