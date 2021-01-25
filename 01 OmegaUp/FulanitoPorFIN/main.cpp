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
        gasolina.push_back((long long int) dato + gasolina[i-1]);
    }

    long long int gas_restante;
    long long int r;
    for (long long int x=0;x<preguntas;x++)
    {
        cin>>gas_restante;
        long long int i=1, j=numero, medio;
        while (i<=j)
        {

            if (j-i < 2)
            {
                if (gasolina[j-1] <= gas_restante)
                {
                    r = (long long int) gas_restante - gasolina[j-1];
                    cout << (long long int) j << " " << (long long int) r << "\n";
                    break;
                }
                else if (gasolina[i-1] <=gas_restante)
                {
                    r = (long long int) gas_restante - gasolina[i-1];
                    cout<<(long long int) i<<" "<<(long long int) r<<"\n";
                    break;
                }
                else
                {
                    cout<<"0 "<<(long long int) gas_restante<<"\n";
                    break;
                }
            }
            medio = (long long int) ((i+j)/2);
            if (gasolina[medio-1] == gas_restante)
            {
                r = (long long int) gas_restante - gasolina[medio-1];
                cout<<(long long int) medio<<" "<<(long long int) r<<"\n";
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