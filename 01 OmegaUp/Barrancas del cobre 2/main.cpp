#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, rep, suma=0, res = -50004,k=0;
    cin>>n>>rep;
    int v[n];
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for (int i=1;i<n;i++)
    {
        suma+=(v[i]-v[i-1]);
        if (i>=rep-1)
        {
            if (suma>res)
            {
                res = suma;
            }
            suma -= (v[k+1]-v[k]);
            k++;
        }
    }

    cout<<res;

    return 0;
}