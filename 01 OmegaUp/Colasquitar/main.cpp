#include <bits/stdc++>
using namespace std;


struct Cliente {
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo {
    Cliente c;
    Nodo *siguiente;
};

void pedirDatos(Cliente &);
void agregar(Nodo *&, Nodo *&, Cliente );
void quitar (Nodo *&, Nodo *&, Cliente &);
bool colaVacia(Nodo *);

int main () {
    Nodo *frente=NULL;
    Nodo *fin=NULL;
    Cliente c;
    char s;

    while (s!='n') {
        pedirDatos(c);
        agregar(frente,fin,c);
        cout<<"Desea agregar un nuevo cliente? (s/n)";
        cin>>s;
        cin.ignore();

    }
    while (frente !=NULL) {
        quitar(frente, fin, c);
        cout<<"Nombre: "<<c.nombre<<endl;
        cout<<"Clave: "<<c.clave<<endl;
        cout<<"Edad: "<<c.edad<<endl;
        cout<<"\n";
    }

    return 0;
}

void pedirDatos(Cliente &c) {
    cout << "\nNombre" << endl;
    cin.getline(c.nombre,30,'\n');
    cout<<"Clave"<<endl;
    cin.getline(c.clave,10,'\n');
    cout<<"Edad"<<endl;
    cin>>c.edad;
    cin.ignore();


}

void agregar(Nodo *&frente, Nodo *&fin, Cliente c) {
    Nodo *nuevo_n = new Nodo();
    nuevo_n->c=c;
    nuevo_n->siguiente=NULL;
    if (colaVacia(frente)) {
        frente=nuevo_n;
    }
    else {
        fin->siguiente=nuevo_n;
    }
    fin=nuevo_n;
}

bool colaVacia(Nodo *frente) {
    return (frente==NULL)? true : false;
}

void quitar(Nodo *&frente, Nodo *&fin, Cliente &c) {
    c=frente->c;
    Nodo *aux = frente;
    if (frente==fin) {
        frente=NULL;
        fin=NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}