#include <bits/stdc++.h>

#define ll long long int
using namespace std;

bool check(ll n, ll x)
{
    ll sum = 0;
    for (ll i=0;i<=n;i++)
    {
        sum += (pow(2,i) * x);
        if (sum>n)return false;
        if (sum == n)return true;
    }
    return false;
}
ll solve(ll n)
{
    if (n%3 == 0)//par
    {


        return (ll) n/3;
    }
    for (ll i=1;i<n;i++)
    {
        if (n % i == 0)
        {
            if (check(n,i))
            {
                return i;
            }
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    ll d;
    for (int i=0;i<n;i++)
    {
        cin>>d;
        cout<<solve(d)<<endl;
    }
    return 0;
}
