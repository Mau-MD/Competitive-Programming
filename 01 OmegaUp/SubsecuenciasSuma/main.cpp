#include <iostream>
using namespace std;

bool possible(int arreglo[], int n)
{
    // Primeramente obtenemos la suma total de los digitos
    int suma = 0;
    for (int i=0;i<n;i++)
    {
        suma += arreglo[i];
    }

    // Podemos notar que para los numeros impares sera imposible encontrar dos subarreglos de sumas iguales ya que
    // la suma de dos numeros a + b, siempre dara un numero par

    if (suma & 1) return false;

    // Obtenemos nuestro objetivo el cual se representa por la suma total sobre dos
    int obj = suma / 2;

    // Empezamos a generar subsecuencias guardando la suma de cada una
    int suma_subsecuencia = 0;

    for (int i = 0 ; i < (1<<n); i ++) // Delimitamos el for a 2^n para generar todas las subsecuencias
    {
        for (int j = 0; j < n; j++) // Iteramos a traves de todos los bits del numero
        {
            if (i & (1 << j)) // Si esta encendido el bit del numero actual de i
            {
                suma_subsecuencia += arreglo[j]; // Agregamos el elemento de la subsecuencia de la suma
                if (suma_subsecuencia > obj)break;
            }
        }

        if (suma_subsecuencia == obj) // Si la suma es igual a mi objetivo
        {
            return suma - suma_subsecuencia == obj; // Solo para asegurar que se cumple
        }

        suma_subsecuencia = 0; // Reseteamos la subsecuencia
    }

    return false;
}

int main()
{
    int n, suma = 0;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        suma+=a[i];
    }

    cout<<possible(a, n);
    return 0;
}
