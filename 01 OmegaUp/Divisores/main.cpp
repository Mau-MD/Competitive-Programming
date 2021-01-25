#include <iostream>
using namespace std;
int main()
{
    long int n, suma=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)suma+=1;
    }
    cout<<suma;

    return 0;
}
