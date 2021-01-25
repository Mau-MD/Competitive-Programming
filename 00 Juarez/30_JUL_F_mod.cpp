#include <iostream>
#define ll unsigned long long int

using namespace std;



ll period_length(ll n, ll m)
{
    ll period = 0; 
    ll a=0, b=1, c;
    while (true)
    {
        period++;
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)return period;
    }
}

ll fibo_mod(ll pos, ll m)
{
    ll a = 2, b = 3, c;
    ll curr = 5;
    while (curr <= pos)
    {
        c = (a + b)%m;
        a = b;
        b = c;
        curr++;
    }
    return c;
}


// 0 1 3 2 1 -- 0 1 3 2 1 --  0 1 3 2 1 

// longitud 5
// indice 31
// obj 1

int main()
{
    ll n, m;
    cin>>n>>m;
    ll period = period_length(n,m);
    ll pos = n % period;
    cout<<fibo_mod(pos,m)<<endl;
    return 0;
}