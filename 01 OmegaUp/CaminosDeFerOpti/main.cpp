#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int suma = m+1, aux = m;
    for (int i=0;i<n;i++, suma++)
    {
        aux+=suma;
    }

    return 0;
}
