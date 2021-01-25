#include <iostream>
#include <string>
using namespace std;
int main()
{
    long int n,m;
    cin>>n>>m;
    string t;
    cin>>t;
    long int a[n];
    for (long int i=0;i<n;i++)
    {
        a[i] = t[i] - 48;
    }
    long int pos = -1;
    while (true)
    {
        if (pos == n-1)break;
        pos+=m;
        if (pos > n-1 ||a[pos]==0 )
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<(long int)(pos+1)/m;
    return 0;
}
