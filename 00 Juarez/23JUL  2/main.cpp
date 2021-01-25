#include <iostream>
#define ll unsigned long long int
ll M = 1000000007;

using namespace std;

ll solve()
{
    ll a,b;
    cin>>a>>b;
    ll a_aux = a%M;
    ll b_aux = b%M;
    return (ll) (a_aux * b_aux) % M;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
