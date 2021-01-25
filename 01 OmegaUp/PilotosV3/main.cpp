#include <bits/stdc++.h>
using namespace std;
//factores a tomar. Primero tiene que llegar para luego comprobar si pueden salir.

int main() {
    int n;
    cin>>n;
    int horas[n][2]; string aeropuertos[n][2];

    for (int i=0;i<n;i++)
    {
        cin>>horas[i][0]>>horas[i][1];
        cin>>aeropuertos[i][0];
        cin>>aeropuertos[i][1];
    }

    int m;
    cin>>m;

    map<string,int>disponibles;

    string dato;
    //Aeropuertos disponibles en la hora 0;
    for (int i=0;i<m;i++)
    {
        cin>>dato;
        disponibles[dato]++;
    }

    for (int hora = 0; hora<=24;hora++)
    {
        //Primero comprobar si un avion llega

        for (int i=0;i<n;i++)
        {
            if (horas[i][1]==hora)
            {
                disponibles[aeropuertos[i][1]]++;
            }
        }

        for (int i=0;i<n;i++)
        {
            if (horas[i][0]==hora)
            {
                auto fix = disponibles.find(aeropuertos[i][0]);
                if (fix == disponibles.end())
                {
                    cout<<"False"; return 0;
                }
                else
                {
                    disponibles[aeropuertos[i][0]]--;
                    if (disponibles[aeropuertos[i][0]]==0)
                    {
                        disponibles.erase(aeropuertos[i][0]);
                    }
                }
            }
        }
    }

    cout<<"True";





    //DEBUG
    /*
    for (auto itr = disponibles.begin();itr!=disponibles.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
     */




    return 0;
}