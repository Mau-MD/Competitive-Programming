#include <iostream>
using namespace std;
int main()
{
    int n, bolsas, precio, suma = 0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>bolsas>>precio;
        suma+=bolsas*precio;
    }
    cout<<suma;
    return 0;
}
