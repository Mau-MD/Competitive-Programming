#include <iostream>
using namespace std;

int main()
{
    int b,c; // Empezamos con mis numeros base
    cin>>b>>c;
    int n; // Numero de numeros con los cuales vamos a probar si son congruentes
    cin>>n;

    int numeros_congruentes = 0, numero; // Inicializamos la cantidad de los numeros y el numero que vamos a leer
    int modulo = b % c;  // Definimos nuestro modulo base que sera b % c (como esta explicado en el problema)


    for (int i = 0;i<n;i++)
    {
        cin>>numero;
        if (numero % c == modulo) // Si algun numero modulo c es igual a mi modulo base, entonces pertenece a la misma rebanada
        {
            numeros_congruentes++;
        }
    }

    cout<<numeros_congruentes;

    return 0;
}
