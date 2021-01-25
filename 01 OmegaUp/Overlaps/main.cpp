#include <bits/stdc++.h>

using namespace std;

map<int,vector<pair<int,int>>>mapa;
vector<pair<int,int>>lista;
stack<pair<int,int>>Cola;

int n,m,k;

int solve(int x)
{
    lista = mapa[x];
    sort(lista.begin(),lista.end());
    Cola.push(lista[0]);
    for (int i=1;i<lista.size();i++)
    {
        pair<int,int>now;
        now = Cola.top();
        int front = max(now.first, lista[i].first);
        int back = min(now.second, lista[i].second);
        cout<<back-front<<endl;
        if (back-front>=0) // Overlaps
        {
            Cola.pop();
            now.second = max(now.second, lista[i].second);
            cout<<"debug"<<now.first<<" "<<now.second<<endl;
            Cola.push(now);
        }
        else
        {
            Cola.push(lista[i]);
        }
    }
    int total = 0;
    for (int i=0;i<Cola.size()+1;i++)
    {
        //cout<<Cola.top().second<<" "<<Cola.top().first<<endl;
        total += Cola.top().second - Cola.top().first+1;
        Cola.pop();
    }
    return total; // Regresa los ocupados.
}


int main()
{

    cin>>n>>m>>k;
    int track[k][3];

    for (int i=0;i<k;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>track[i][j];
        }
    }

    for (int i=0;i<k;i++)
    {
        mapa[track[i][0]].push_back(make_pair(track[i][1],track[i][2]));
    }

    int maximo = m*n;

    for (auto it = mapa.begin();it != mapa.end(); it++)
    {
        maximo -= solve((*it).first);
    }
    cout<<maximo;

    return 0;
}
