    #include <iostream>
    #include <vector>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        long long int preguntas, numero, dato, suma = 0;
        cin>>preguntas>>numero;
        vector<long long int>gasolina;
        for (long long int i=0;i<numero;i++)
        {
            cin>>dato;
            suma +=dato;
            gasolina.push_back(suma);
        }
    /*
        for (auto x:gasolina)
        {
            cout<<x<<" ";
        }
*/
        cout<<"\n";
        long long int gas_restante;
        for (int x=0;x<preguntas;x++)
        {
            cin>>gas_restante;
            long long int i=0, j=numero-1, medio;
            while (i<=j)
            {
                medio = (i+j)/2;
                if (gasolina[medio] == gas_restante)
                {
                    cout<<medio + 1<<" 0"<<"\n";
                    break;
                }
                else if (j-i < 2)
                {
                    // 1 140 450 700
                    //    ^   ^
                    if (gasolina[j] > gas_restante && gasolina[i] < gas_restante)
                    {
                        cout<<i+1<<" "<<gas_restante - gasolina[i]<<"\n";
                        break;
                    }
                    else if (gas_restante >= gasolina[j])
                    {
                        cout<<j+1<<" "<<gas_restante - gasolina[j]<<"\n";
                        break;
                    }
                    else
                    {
                        cout<<"0 "<<gas_restante<<"\n";
                        break;
                    }
                }
                else if (gasolina[medio] > gas_restante)
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
