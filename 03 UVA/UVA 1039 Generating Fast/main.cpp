#include <bits/stdc++.h>
using namespace std;

/**
 * Esta funcion calcula el factorial de un numero
 * @param n el numero que queremos calcular
 * @return el valor del numero
 */
int factorial(int n)
{
    int valor = 1;
    for (int i = 1; i <= n ; i ++)
    {
        valor *= i;
    }
    return valor;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        string letras; // El string que vamos a leer
        cin>>letras;
        set<string>permutaciones; // Un set que evitara que las permutaciones se repitan

        for (int i=0;i<factorial(letras.size()); i++) // Iteramos hasta el factorial del numero
        {
            next_permutation(letras.begin(),letras.end()); // Siguiente permutacion
            permutaciones.insert(letras); // Insertamos la permutacion en nuestro set
        }

        // Iteramos en todo nuestro set y lo imprimimos
        for (auto it = permutaciones.begin(); it != permutaciones.end(); ++it)
        {
            cout<<*it<<"\n";
        }
        cout<<"\n";
    }
    return  0;
}
