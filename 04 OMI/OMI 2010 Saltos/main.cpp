#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

ll m,n,a,d,xi,yi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> a >> d >> yi >> xi;
    yi--;
    xi--;

    ll x = xi, y = yi, ans1 = 0, ans2 = 0;
    // pasos para legar a xi
    while (true)
    {
        x = (x + d) % m;
        if (x == xi)break;
        ans1++;
    }

    while (true)
    {
        y = (y + a) % n;
        if (y == yi)break;
        ans2++;
    }

    cout<<lcm(x,y);
}