#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;


    ll ans=1, p2=1, m = 1e9+7;


    for (int i=2;i<=n;i++)
    {
        ans = (ans * i) % m;
        p2 = (p2 * 2) % m;
    }
    cout<<(ans - p2 + m) % m<<endl;

    return 0;
}