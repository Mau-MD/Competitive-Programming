#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int i=sqrt(n);
    while (i>1)
    {
        if (n%i==0)return false;
        i--;
    }
    return true;
}

void solve(int n)
{
    int suma=n+1, numero_inicial = 2, aux = n;
    while (true)
    {
        while (suma>n)
        {
            suma = numero_inicial + aux;
            if (suma>n)
            {
                aux--;
            }
        }
        if (suma == n)
        {
            if (isPrime(aux))
            {
                cout<<min(aux, numero_inicial)<<" "<<max(aux,numero_inicial)<<"\n"; return;
            }
            else
            {
                while (true)
                {
                    numero_inicial++;
                    if (isPrime(numero_inicial))break;
                }
            }
        }
        suma = n+1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n=1;
    while (true)
    {
        cin>>n;
        if (n==0)break;
        solve(n);
    }

   return 0;
}