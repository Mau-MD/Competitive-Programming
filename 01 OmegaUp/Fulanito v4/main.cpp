#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int preguntas, numero, dato;
    cin>>preguntas>>numero;
    vector<long long int>gasolina;
    cin>>dato;
    gasolina.push_back(dato);
    for (long long int i=1;i<numero;i++)
    {
        cin>>dato;
        gasolina.push_back(dato + gasolina[i-1]);
    }

    long long int gas_restante;
    for (int x=0;x<preguntas;x++)
    {
        cin>>gas_restante;
        long long int i=1, j=numero, medio;
        while (i<=j)
        {

            if (j-i < 2)
            {
                if (gasolina[j-1] <= gas_restante)
                {
                    cout << j << " " << gas_restante - gasolina[j-1] << "\n";
                    break;
                }
                else if (gasolina[i-1] <= gas_restante)
                {
                    cout<<i<<" "<<gas_restante - gasolina[i-1]<<"\n";
                    break;
                }
                else
                {
                    cout<<"0 "<<gas_restante<<"\n";
                    break;
                }
            }
            medio = ((i+j)/2);
            if (gasolina[medio-1] == gas_restante)
            {
                cout<<medio<<" "<<gas_restante - gasolina[medio-1]<<"\n";
                break;
            }
            else if (gasolina[medio-1] > gas_restante)
            {
                j = medio;
            }
            else
            {
                i = medio ;
            }

        }
    }
    return 0;
}