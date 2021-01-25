#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long int preguntas, autos;
    cin>>preguntas>>autos;
    long long int dato, suma = 0, arreglo[autos];
    for (long long int i=0;i<autos;i++)
    {
        cin>>dato;
        suma += dato;
        arreglo[i] = suma;
    }


    long long int gasolina;
    for (long long int i=0;i<preguntas; i++)
    {
        cin>>gasolina;
        long long int izq = 0, der = autos - 1, medio = (izq + der) / 2;
        while (true)
        {
            if (arreglo[medio] == gasolina)
            {
                cout<<(long long int) medio + 1<<" "<<(long long int) gasolina - arreglo[medio]<<endl;
                break;
            }
            else if (der - izq < 2)
            {
                if (gasolina > arreglo[der])
                {
                    cout<<(long long int) der + 1<<" "<<(long long int) gasolina - arreglo[der]<<endl;
                    break;
                }
                else if (arreglo[izq] < gasolina && arreglo[der] > gasolina)
                {
                    cout<<(long long int)izq + 1<<" "<<(long long int) gasolina - arreglo[izq]<<endl;
                    break;
                }
                else
                {
                    cout<<"0"<<" "<<gasolina<<endl;
                    break;
                }
            }

            if (arreglo[medio] > gasolina)
            {
                der = medio;
                medio = (long long int)(izq + der) / 2;
            }
            else if (arreglo[medio] < gasolina)
            {
                izq = medio;
                medio = (long long int) (izq + der) / 2;
            }
        }
    }
    return 0;
}
