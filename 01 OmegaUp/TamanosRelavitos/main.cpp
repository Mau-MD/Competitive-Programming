#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, dato, avg, suma = 0;
    cin>>n;
    vector<double>a(10e5,0);
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        dato = log(dato);
        a[i] = dato;
        suma+=a[i];
    }

    avg = suma / n;
    double newSum = 0;
    for (int i=0;i<n;i++)
    {
        newSum += pow(a[i] - avg, 2);
    }
    double deviacion = sqrt(newSum/(n-1));
    double VS,S,M,L,VL;
    VS = avg - 2 * deviacion;
    S = avg - deviacion;
    M = avg;
    L = avg + deviacion;
    VL = avg + 2 * deviacion;

    VS = exp(VS);
    S = exp(S);
    M = exp(M);
    L = exp(L);
    VL = exp(VL);

    cout<<fixed<<setprecision(2)<<VS<<endl;
    cout<<fixed<<setprecision(2)<<S<<endl;
    cout<<fixed<<setprecision(2)<<M<<endl;
    cout<<fixed<<setprecision(2)<<L<<endl;
    cout<<fixed<<setprecision(2)<<VL<<endl;


    return 0;
}
