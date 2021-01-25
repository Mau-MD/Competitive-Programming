#include <iostream>
using namespace std;
int main()
{
    long long int numero, resultado; // Utilizamos long long int porque los limites son de 2^18
    cin>>numero;

    resultado = (numero * (numero + 1 ) / 2);
    cout<<resultado;
    return 0;
}
