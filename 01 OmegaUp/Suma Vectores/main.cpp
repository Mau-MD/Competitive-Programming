#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n], y[n];
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for (int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<x[i] + y[i]<<" ";
    }

    return 0;
}
