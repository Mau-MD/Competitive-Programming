#include <iostream>
using namespace std;
int main()
{
    int n,k, dato, suma =0;
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if (dato == k)
        {
            suma+=1;
        }
    }
    cout<<suma;
    return 0;
}
