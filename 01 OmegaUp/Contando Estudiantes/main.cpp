#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int dato;
    map<int,int>lista;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if (dato == 1)
        {
            int edad;
            cin>>edad;
            lista[edad]++;
        }
        else if (dato == 2)
        {
            int edad;
            cin>>edad;
            int cuenta =0;
            for (auto it = lista.begin();it!=lista.end();it++)
            {
                if ((*it).first > edad)break;
                if ((*it).first <= edad)cuenta++;
            }
            cout<<cuenta<<"\n";
        }
    }

    return 0;
}
