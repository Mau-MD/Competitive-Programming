#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int baraja[n], final[n];

    for (int i=0;i<n;i++)
    {
        cin>>baraja[i];
    }

    // 1 2 3 4
    // 1 3 2 4
    int j=n/2, k = 0;
    for (int i=0;i<n;i+=2,j++,k++)
    {
        final[i]=baraja[k];
        final[i+1]=baraja[j];
    }
    if (n%2!=0)
    {
        final[n-1] = baraja[n-1];
    }

    for (int i=0;i<n;i++)
    {
        cout<<final[i]<<" ";
    }
    // :)
    return 0;
}