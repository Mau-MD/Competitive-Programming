#include <iostream>
using namespace std;

long long int sumatoria(int n)
{
    return ((n * (n+1))/2);
}
int main()
{
    long long int n, s=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        s += sumatoria(i);
    }
    cout<<s;
    return 0;
}
