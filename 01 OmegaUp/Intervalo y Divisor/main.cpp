#include <iostream>
using namespace std;
int main()
{
    int divisible; // Definimos la variable que veremos si el numero del rango es divisible
    int inicio, final; // Definimos el inicio y el final del rango

    cin>>divisible;
    cin>>inicio>>final;

    int numero_divisibles = 0;
    for (int i = inicio; i<= final; i++)
    {
        if (i % divisible == 0) // Si el numero del rango es divisible entre un numero anteriormente dado
        {
            numero_divisibles++;
        }
    }

    cout<<numero_divisibles;
    return 0;
}
