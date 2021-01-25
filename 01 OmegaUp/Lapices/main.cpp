#include <iostream>
using namespace std;
int main()
{
    int n, a, dato;
    cin>>n>>a;
    int suma = 0;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if (dato == a)suma ++;
    }
    cout<<suma;
    return 0;
}
