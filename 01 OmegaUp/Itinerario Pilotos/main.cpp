#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> disponibles;
    map<string,int>::iterator fix;


    int n,m,hora=0;
    cin>>n;

    int horas[n][2]; string aeropuertos[n][2];
    string dato;

    for (int i=0;i<n;i++)
    {
        cin>>horas[i][0];
        cin>>horas[i][1];
        cin>>aeropuertos[i][0];
        cin>>aeropuertos[i][1];

    }

    vector<int> check(n,0);


    cin>>m;

    for (int i=0;i<m;i++)
    {
        cin>>dato;
        disponibles[dato]++;

    }

    multimap<int,string>aterrizaje;
    multimap<int,string>::iterator itr;
    pair<int,string> par;
    pair<string,int> par1;

    for (hora=0;hora<=48;hora++)
    {
        if (!aterrizaje.empty())
        {
            for (itr = aterrizaje.begin(); itr != aterrizaje.end(); itr++)
            {
                if (hora == itr->first)
                {
                    disponibles[itr->second]++;
                    aterrizaje.erase(itr->first);
                    if (aterrizaje.empty())
                    {
                        break;
                    }
                }
            }
        }

        for (int i=0;i<n;i++)
        {
            if (horas[i][0]==hora)
            {
                fix = disponibles.find(aeropuertos[i][0]);
                if(fix!=disponibles.end())
                {
                    if (disponibles[aeropuertos[i][0]]-- == -1)
                    {
                        break;
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
                else
                {
                    break;
                }


            }
        }


    }

    bool final=true;
    for (int i=0;i<n;i++)
    {
        if (check[i]==0)
        {
            final = false;
        }

    }
    if (final)
    {
        cout<<"True";
    }
    else {
        cout<<"False";
    }




    return 0;
}