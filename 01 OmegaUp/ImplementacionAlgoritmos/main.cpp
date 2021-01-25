#include <iostream>
#include <algorithm>
int busqueda_binaria(int arreglo[], int tamano, int numero)
{
    int izquierda = 0, derecha = tamano - 1, mitad;
    while (izquierda <= derecha)
    {
        int mitad = (izquierda + derecha) / 2;
        if (arreglo[mitad] == numero)return mitad;
        else if (arreglo[mitad] > numero) derecha = mitad - 1;
        else if (arreglo[mitad] < numero) izquierda = mitad + 1;
    }
    return -1; // Por si no se encontro
}

void insertionSort(int arreglo[], int tamano)
{
    int i, j;
    for (i=1; i<tamano;i++)
    {
        int aux = arreglo[i];
        j = i - 1;
        while (j >= 0 && arreglo[j] > aux)
        {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = aux;
    }
}       // ¿No es mejor usar sort()?

int mcd(int numero1, int numero2)
{
    int r, a, b;
   if (numero1 > numero2)
   {
       a = numero1;
       b = numero2;
   }
   else
   {
       a = numero2;
       b = numero1;
   }

   while (b > 0)
   {
       r = a % b;
       a = b;
       b = r;
   }
   return a;
}


int main()
{
   std::cout<<mcd(96,96/2);
    return 0;
}
