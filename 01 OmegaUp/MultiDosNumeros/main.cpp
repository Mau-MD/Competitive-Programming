#include <iostream>
#include <queue>

using namespace std;
int main()
{
    int n, dato;
    priority_queue<int>secuencia;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        secuencia.push(dato);
    }
    int a,b;
    a = secuencia.top();
    secuencia.pop();
    b = secuencia.top();
    while (b==a)
    {
        secuencia.pop();
        b = secuencia.top();
    }

    cout<<a<<" "<<b<<" "<<a*b;
    return 0;
}
