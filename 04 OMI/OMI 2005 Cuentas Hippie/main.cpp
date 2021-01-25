#include <bits/stdc++.h>
using namespace std;
const int maxN = 30002;
typedef pair<int,int> pii;
int cuantas, n;
int a[maxN];
deque<int>cola;
bool v[maxN];

void marcarVisitado(bool dir, int inicio, int objetivo)
{
    if (dir) // Derecha
    {
        while (inicio != objetivo)
        {
            v[inicio] = true;
            inicio++;
            if (inicio == n)inicio = 0;
        }
    }
    else
    {
        while (inicio != objetivo)
        {
            v[inicio] = true;
            inicio--;
            if (inicio < 0)inicio = n-1;
        }
    }
}

int buscarVisitado(bool dir, int inicio, int objetivo)
{
    int ans = 0;
    if (dir) // Derecha
    {
        inicio++;
        while (v[inicio])
        {
            inicio++;
            if (inicio == n)inicio = 0;
            ans++;
        }
    }
    else
    {
        inicio--;
        while (v[inicio])
        {
            inicio--;
            if (inicio < 0)inicio = n - 1;
            ans++;
        }
    }
    return ans ;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>cuantas>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int inicio = -1;
    for (int i=0;i<n;i++)
    {
        if (a[i] == 0)
        {
            cola.push_back(i);
        }
    }
    int ans = 0;

    int index;

    index = cola.front();
    cola.pop_front();

    while (!cola.empty())
    {
        int izquierda = index - cola.back() - 1;
        if (izquierda < 0)izquierda += n ;
        int derecha = cola.front() - index - 1;
        if (derecha < 0)derecha += n;

        izquierda -= buscarVisitado(0, index, cola.back());
        derecha -= buscarVisitado(1, index, cola.front());

        if (izquierda < derecha)
        {
            ans += izquierda;
            marcarVisitado(0,index,cola.back());
            index = cola.back();
            cola.pop_back();
        } else
        {
            ans += derecha;
            marcarVisitado(1,index,cola.front());
            index = cola.front();
            cola.pop_front();
        }
    }
    cout<<ans;


    return 0;
}
