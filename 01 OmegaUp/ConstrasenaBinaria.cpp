#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll ans = (n/2) * (n/2 + 1);
    ans = ans / 2;
    bitset<64>num(ans);
    cout<<num.count();



    return 0;
}