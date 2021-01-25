#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    unsigned long long int n,m, mayor, menor;
    cin>>n>>m;

    mayor = max(n,m);
    menor = min(n,m);
    if (mayor % menor == 0 )cout<<"No";
    else cout<<"Si";


    return 0;
}
