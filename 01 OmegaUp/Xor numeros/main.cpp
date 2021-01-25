#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int maxi = -1;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            int c = ar[i] ^ ar[j];
            maxi = max(maxi,c);
        }
    }
    cout<<maxi;

    return 0;
}
