#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maxi, trans;
    cin>>maxi>>trans;
    int ans = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] > maxi) // Necesito hacer transacciones
        {
            int div = maxi + trans;
            int op = a[i] / div;
            ans += (op * trans);
        }
    }
    cout<<ans;
    return 0;
}
