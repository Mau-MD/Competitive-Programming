#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double distanciaPuntos(int x1, int y1, int x2, int y2)
{
    return (double) sqrt(pow(x2 - x1, 2) + pow(y2-y1,2));
}

int main()
{
    int n;
    cin>>n;
    int x[n], y[n];
    for (int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    double minimo = 99999;
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<n;j++)
       {
           if (i == j)continue;
           minimo = min(minimo, distanciaPuntos(x[i],y[i],x[j],y[j]));
           cout<<minimo<<" ";

       }
    }

    cout<<minimo;
    return 0;
}
