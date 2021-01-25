#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(int n, int m)
{
    if (n == 1 && m == 1)return 1;
    else
    {
        if (n < m)
        {
            return 1 + solve(n,m-n);
        }
        else
        {
            return 1 + solve(n-m, m);
        }

    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    if (n == m)cout<<"1";
    else if (n == m-1)cout<<n;
    else if (m == 1)cout<<n;
    else if (n == 1)cout<<m;
    else
    {
        if (m < n)swap(n,m); // siempre menor en n

        ll ans;
        // sacar base
        ll base = m % n; // 1 2 0 base 0 significa 1 
        // donde base uno viene siendo n , 1
        if (base == 0)
        {
            ans = 1 + (m/n) - 1;
        }
        else
        { 
            ans = solve(n,base);
            ans += (m / n);
        }
        cout<<ans;


    }

    return 0;
}