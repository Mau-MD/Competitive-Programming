#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;

    int enfrente, atras;

    if ((n + p) % 3 == 0)enfrente = 3;
    else enfrente = (n + p) % 3;

    if ((n + (p * 2)) % 3 == 0)atras = 3;
    else atras = (n + (p * 2)) % 3;

    cout<<atras<<" "<<enfrente;
    return 0;
}
