#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000*10000; // Declaramos nuestra variable  maxima

bool criba[MAX]; // Declaramos nuestro arreglo que contendra los numeros primos

long long int suma_de_rangos[MAX / 9997], arreglo[MAX / 9997]; // Declaramos nuestro arreglo que tendra las sumas de rangos y otro
                                                               // que tendra los numeros normales en el arreglo

/**
 * Esta funcion utiliza un arreglo booleano donde marca como verdaderos los numeros que son primos
 * entre 1 y MAX.
 */
void hacer_criba()
{
    memset(criba,true,MAX);
    criba[0] = false;
    for (int i = 2; i * i <= MAX ; i ++)
    {
        if (criba[i])
        {
            for (int j = i * i; j<=MAX ;j+=i)
            {
                criba[j] = false;
            }
        }
    }
}

/**
 * La funcion sru (suma de rangos unidimensionales) regresa la suma de numeros consecutivos dados los indices i j
 * @param i El posicion inicial de la suma
 * @param j La posicion donde se terminara la suma
 * @return la suma entre el rango i j del arreglo
 */
long long int sru(int i, int j)
{
    if (i == 0)return suma_de_rangos[j];
    else return suma_de_rangos[j] - suma_de_rangos[i - 1];
}

int main()
{

    int test_cases;
    cin >> test_cases;
    hacer_criba(); // Creamos nuestra criba
    while (test_cases--)
    {
        long long int n, suma = 0, dato;
        cin>>n;


        // Leemos nuestros valores del arreglo. Cabe notar que lo guardamos en dos arreglos
        // diferentes. Esto es debido a que necesitamos un arreglo con las sumas para la funcion sru y otras para poder
        // imprimir el resultado al final del problema
        for (int i = 0 ; i < n ; i ++)
        {
            cin>>dato;
            suma+=dato;
            suma_de_rangos[i] = suma;
            arreglo[i] = dato;
        }


        long long int valor; // El valor que tomara lo que regrese la funcion de sru
        long long int nMaximo = 999999; // Lo usamos como un control, si encontramos un subarreglo primo de tamano 3, no
        // seguiremos iterando buscando subarreglos mayores de 3

        int i_minimo, j_minimo; // Para guardar los indices de la subsecuencia encontrada
        bool flag = false; // Para saber si existe alguna subsecuencia prima o no


        for (int i = 0; i < n; i ++) // Pos incial del sru
        {
            for (int j = i+1; j < n; j++) // Pos final del sru
            {
                if (j >= nMaximo + i )break; // Si nuestra longitud es mayor a nuestra variable de control de longitud
                valor = sru(i, j); // Calculamos la suma
                if (criba[valor] && j - i + 1 < nMaximo) // Si es primo y es menor a la longitud que teniamos calculada
                {
                    nMaximo = j - i + 1;
                    i_minimo = j;
                    j_minimo = i;
                    flag = true;
                }
            }
        }

        if (flag) // Si existe alguna subsecuencia prima
        {
            cout << "Shortest primed subsequence is length " << nMaximo << ":";
            for (int i = j_minimo; i < i_minimo + 1; i++)
            {
                cout << " "<<arreglo[i]; // Aqui utilizamos el arreglo normal
            }
        }
        else
        {
            cout<<"This sequence is anti-primed.";
        }

        cout<<endl;
    }

    return 0;
}
