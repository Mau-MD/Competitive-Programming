#include <iostream>
using namespace std;

long long int factorial(long long int n)
{
    long long int numero = 1;
    for (long long int i = 1; i <= n;i++)
    {
        numero *= i;
    }
    return numero;
}

int main()
{
    long long int n,r;
    cin>>n>>r;
    cout<<(factorial(n))/(factorial(r) * factorial((n-r)));

    return 0;
}
