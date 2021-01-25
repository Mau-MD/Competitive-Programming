#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll factorial(int n)
{
    ll ans = 1;
    for (int i = 2 ; i<=n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<(ll) (factorial(n)) / (n * (n/2));
    return 0;
}
