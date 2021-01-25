#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int p,n, suma=0, dato;
    cin>>p>>n;
    long int a[n];
    for (long int i=0;i<n;i++)
    {
        cin>>dato;
        suma += dato;
        a[i] = suma;
    }
    long int preg;
    for (long int i=0;i<p;i++)
    {
        cin>>preg;
        if (preg > a[n-1])
        {
            cout<<n<<" "<<preg - a[n-1]<<endl;
            continue;
        }
        auto x = lower_bound(a,a+n,preg);
        long int valor = x-a;
        if (a[valor] > preg)
        {
            cout<<x-a<<" "<<preg - a[x-a-1]<<endl;
        }
        else
        {
            cout<<x-a+1<<" 0"<<endl;
        }
    }
    return 0;
}
