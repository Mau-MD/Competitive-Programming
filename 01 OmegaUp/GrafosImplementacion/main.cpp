#include <bits/stdc++.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo *izq;
    Nodo *der;
    int identificador;

};

Nodo *arbol = NULL;

vector<int> check(10,0);

Nodo *crearArbol (int n, int i)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->der = NULL;
    nuevo_nodo->identificador = i;

    return nuevo_nodo;
}

void insertar(Nodo *&arbol, int n, int dato1,int i)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearArbol(n,1);
        arbol=nuevo_nodo;
    }
    else {
    for (int j=0;j<check[dato1];j++)
    {
        if (i==0)
        {
            insertar(arbol->izq,n,dato1,i);
        }
        else
        {
            insertar(arbol->der,n,dato1,i);
        }
    }
    }
}

void busqueda(Nodo *arbol, int dato)
{
    if (arbol->identificador==dato)
    {
        return ;
    }
    else
    {
        busqueda(arbol->izq, dato);
        busqueda(arbol->der, dato);
    }
}

void preOrden(Nodo *arbol)
{
    if (arbol==NULL)
    {
        return;
    }
    else
    {
        cout<<arbol->dato<<" "<<arbol->identificador<<endl;
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

int main ()
{

    int n,dato1,dato2;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>dato1>>dato2;
        check[dato1]++;
    }

    insertar(arbol,5,dato1,i);



    preOrden(arbol);


    return 0;
}