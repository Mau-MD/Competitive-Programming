#include <iostream>


/**
 * Esta funcion deja en verdadero todos los numeros primos menores que n
 * @param lista_de_numeros arreglo donde se van a contener los numeros
 * @param tamano tamano del arreglo
 */

int suma = 0;
void criba_de_eratostenes(bool lista_de_numeros[], int tamano)
{
    // Inicializamos el arreglo con todos los numeros desde 2 hasta n
    for (int i = 2; i <= tamano; i++)
    {
        lista_de_numeros[i] = true; // Empezaremos con que todos los numeros son primos
    }

    // Empezamos la eliminacion de los numeros no primos
    for (int i = 2; i * i <= tamano; i++)
    {
        if (lista_de_numeros[i] != false) // Si no ha sido calculado
        {
            for (int k = tamano / i; k != i; k--)
            {
                if (lista_de_numeros[k] != false)
                {
                    lista_de_numeros[i * k] = false; // Deja de ser primo
                }
            }
        }
    }
}
/**
 * Esta funcion divide un numero en segmentos de 3.
 * @param grupo el arreglo donde se van a almacenar los grupos
 * @param numero el numero al que queremos dividir
 */
int grupo[10];
void dividir_en_segmentos( int numero)
{
    int i = 0; // Inicializamos el indice en 0
    while (numero > 0)
    {
        grupo[i] = numero % 1000; // Guardamos el segmento
        numero = numero / 1000; // Se reduce el numero
        i++; // Se aumenta el indice
    }
}



int main()
{
    int n;
    std::cin>>n;
    dividir_en_segmentos(n);

    for (int i=0;i<3;i++)
    {
        std::cout<<grupo[i]<<" ";
    }
    return 0;
}
