#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>puertas;
    int llave, n_puertas, n_llaves, dato;

    cin>>n_puertas;
    for (int i=0;i<n_puertas;i++)
    {
        cin>>dato;
        puertas.push_back(dato);
    }

    cin>>n_llaves;
    for (int i = 0; i < n_llaves; i++) {
        cin>>llave;
        if (binary_search(puertas.begin(),puertas.end(),llave))
        {
            auto it = lower_bound(puertas.begin(),puertas.end(), llave);
            cout<<it-puertas.begin()+1<<" ";
        }
        else
        {
            cout<<"0"<<" ";
        }
    }



    return 0;
}