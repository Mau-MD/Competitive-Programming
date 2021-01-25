#include <bits/stdc++.h>
using namespace std;

set<int>s;

void solve(int base, int bNumero)
{
    cout<<base<<" ";
    s.insert(base);
    for (int i = 0; i < bNumero; i++)
    {
        for (int j = i + 1; j < bNumero; j++)
        {
            int aux = base;
            if (aux & (1 << i) && !(aux & (1 << j))) // En i esta encendido y en j esta apagado
            {
                aux ^= (1 << i);
                aux |= (1 << j);
                if (!s.count(aux))solve(aux,bNumero);
            }
        }
    }
}

int main()
{
    int bNumero, n; // n bits
    cin>>bNumero>>n;
    
    int base = 0;

    for (int i = 0; i<n;i++)
    {
        base = base | (1 << i); // Prendo los n bits iniciales;
    }
    
    solve(base, bNumero);
    return 0;
}