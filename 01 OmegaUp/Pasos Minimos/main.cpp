#include <bits/stdc++.h>
using namespace std;

vector<int> weigths;

int camino_mas_corto(int n)
{
    int minx;
    if (n==0)return weigths[n];
    else if (n==1)return weigths[n];
    else
    {
        minx = min(camino_mas_corto(n-1)+weigths[n], camino_mas_corto(n-3)+weigths[n-2]);
    }
    return minx;
}

int main() {
    int n, dato;
    cin>>n;

    for (int i=0;i<n*2-1;i++)
    {
        cin>>dato;
        weigths.push_back(dato);
    }

    cout<<camino_mas_corto(n*2-1);
    return 0;
}