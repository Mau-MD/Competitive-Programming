#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string,int> disponibles;
    multimap<int,string>aterrizaje;
    multimap<int,string>::iterator itr;
    pair<int,string> par;
    pair<string,int> par1;

    int n,m,hora=0;
    cin>>n;
    int n1,n2;string salida,regreso;

    int horas[n][2]; string aeropuertos[n][2],dato;

    for (int i=0;i<n;i++)
    {
        cin >> n1 >> n2 >> salida >> regreso;
        horas[i][0]=n1;
        horas[i][1]=n2;
        aeropuertos[i][0]=salida;
        aeropuertos[i][1]=regreso;

    }

    vector<int> check(n,0);


    cin>>m;

    for (int i=0;i<m;i++)
    {
        cin>>dato;
        disponibles[dato]++;
    }


    for (hora=1;hora<=24;hora++)
    {
        for (itr=aterrizaje.begin();itr!=aterrizaje.end();itr++)
        {
            if (hora==itr->first)
            {
                disponibles[itr->second]++;
                aterrizaje.erase(itr->first);
            }
        }


        for (int i=0;i<n;i++)
        {
            if (horas[i][0]==hora)
            {
                if (disponibles[aeropuertos[i][0]]-- == -1)
                {

                }
                else
                {
                    disponibles[aeropuertos[i][0]]--;
                    par.first=horas[i][1];
                    par.second=aeropuertos[i][1];
                    aterrizaje.insert(par);
                    check[i]=1;
                }

            }
        }


    }

    for (auto x:check)
    {
        if (x==1)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }




    return 0;
}
