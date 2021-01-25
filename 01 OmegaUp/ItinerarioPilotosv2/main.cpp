#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    int m1[n][2]; string m2[n][2];

    for (int i=0;i<n;i++)
    {
        cin>>m1[i][0]>>m1[i][1]>>m2[i][0]>>m2[i][1];
        cin.clear();
    }

    map<string,int>disponibles;
    map<string,int>::iterator fix;

    int m;
    string dato;
    vector<string> DATOS;
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>dato;
        DATOS.push_back(dato);

    }
    for (int i=0;i<m;i++)
    {
        disponibles[DATOS[i]]++;
    }

    bool final = true;

    for (int horas=0;horas<=24;horas++)
    {
        for (int i=0;i<n;i++)
      {
          if (m1[i][0]==horas)
          {
              fix= disponibles.find(m2[i][0]);
              if (fix==disponibles.end())
              {
                  final = false; break;
              }
              disponibles[m2[i][0]]--;
              if (disponibles[m2[i][0]]==0)
              {
                  disponibles.erase(m2[i][0]);
              }
          }
          if (m1[i][1]==horas)
          {
              disponibles[m2[i][1]]++;

          }
      }
        if (final==false)
        {
            break;
        }
    }

    if (final)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}