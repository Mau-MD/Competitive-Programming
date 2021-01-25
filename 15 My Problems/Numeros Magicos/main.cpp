#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int a,b,c;
set<ll>numeros;

void precalcular(ll x)
{
    if (x < 1e9 + 2)
    {
        numeros.insert(x);
        precalcular(10 * x + a);
        precalcular(10 * x + b);
        precalcular(10 * x + c);
    }
}

int main()
{
    ofstream in("3.in");
    ofstream out("3.out");
    cin>>a>>b>>c;
    in<<a<<" "<<b<<" "<<c<<endl;
    precalcular(0);


    int querries;
    cin>>querries;
    in<<querries<<endl;
    vector<ll>inn,outt;
    for (int i=0;i<querries;i++)
    {
        ll n = rand() % (ll) 1e8;
        inn.push_back(n);
        auto res = numeros.lower_bound(n);
        outt.push_back(*res);
    }
    for (auto x:inn)in<<x<<endl;
    for(auto x:outt)out<<x<<endl;
    return 0;
}
