#include <iostream>
using namespace std;

int valorAlCubo(int);

int main ()
{
    int n, resultado;
    cin>>n;
    resultado = valorAlCubo(n);
    cout<<resultado;
    return 0;
}

int valorAlCubo(int numero)
{
    int valor = numero * numero * numero;
    return valor;

}