#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int solve()
{
    int n, x;
    cin>>n>>x;
    int ok = 0;
    ll suma = 0;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        suma+=(x - d);
        if (d != x)ok++;
    }

    if (ok==0) return 0;
    if (suma == 0 || ok == 1)return 1;
    return 2;

}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
