
#include <bits/stdc++.h>

using namespace std;
#define MAX 1000002
vector<int>posiciones;
int n, m;
int possible[MAX];

int solve()
{
    int aux=0, suma = 0, pasos = 0;
    for (int i = 1; i < posiciones.size(); i++)
    {
        /*
        cout<<posiciones[i]<<" "<<posiciones[i-1]<<endl;
        cout<<posiciones[i] - posiciones[i-1]<<endl;
         */
        if (posiciones[i] - posiciones[i-1] == m)
        {
            suma = 0;
            aux = 0;
        }
        else
        {
            suma += (posiciones[i] - posiciones[i - 1]);
            if (suma > m)
            {
                aux = 0;
                suma = 0;
            }
            if (suma == m || i == posiciones.size() - 1)
            {
                pasos -= aux;
                aux = 0;
                suma = 0;
            }
            else
            {
                aux++;
            }
        }
        pasos ++;
    }
    return pasos;
}

bool isPossible()
{
    int suma = 0;
    for (int i=0;i<n;i++, suma++)
    {
        if (possible[i] == 1)suma = 0;
        if (suma >= m)return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string t;
    cin >> n >> m;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if(t[i] - 48 == 1)
        {
            posiciones.push_back(i);
        }
        possible[i]=t[i]-48;
    }
    if (isPossible())cout<<solve();
    else cout<<"-1";
    return 0;
}
