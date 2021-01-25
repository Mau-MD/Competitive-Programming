#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ERROR 1e9
int a[MAX], n;

int solve(int valor1, int valor2)
{
    int dif = valor2 - valor1, r=0, temp1=0;
    for (int i=0;i<n;i++)
    {
        if (a[i+1] != NULL)
        {
            if (a[i+1] - a[i] == dif) continue;
            int temp = a[i + 1] - (a[i] - temp1);
            if (dif != temp)
            {
                temp1 = abs(temp-dif);
                r += abs(temp-dif);
                if (abs(temp-dif) > 1)
                {
                    return ERROR;
                }
            }
            else
            {
                temp1=0;
            }
        }
    }
    return r;
}

// Solo se puede realizar una operacion por elemento
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int menor = solve(a[0],a[1]);
    for (int i=1;i<n;i++)
    {
        int aux = solve(a[i],a[i+1]);
        if (aux < menor)
        {
            menor = aux;
            if (menor==1)break;
        }

    }

    if (menor == ERROR)
    {
        cout<<"-1\n";
        return 0;
    }
    cout<<menor;

    return 0;
}