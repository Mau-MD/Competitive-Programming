#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k, x, y;
    cin >> n >> m >> k >> x >> y; // k es energia

    if (x == y)
    {
        ll res = 0;
        ll aux = k/x;
        if (aux > m*n)
        {
            res = n*m;
        }
        else
        {
            res = aux + 1;
        }
        cout<<res;
        return 0;
    }

    // m es para x
    // n es para y
    if (n == 1)
    {
        ll aux = k/x + 1; //5
        if (aux > m)aux = m;
        cout<<aux;
        return 0;
    }
    if (m == 1)
    {
        ll aux = k/y + 1;
        if (aux > n)aux = n;
        cout<<aux;
        return 0;
    }

    if (x < y)
    {
        ll aux = k / x;
        ll div = aux / m;
        if (aux % m == 0)div--;
        ll k_aux = k - (y*div);
        ll xres = k_aux / x;
        ll res = xres + div + 1;
        if (res > n*m)res = n*m;
        cout<<res;
    }
    else
    {
        ll aux = k / y;
        ll div = aux / n;
        if (aux % n == 0)div--;
        ll k_aux = k - (x*div);
        ll yres = k_aux/y;
        ll res = yres + div + 1;
        if (res > n*m)res = n*m;
        cout<<res;
    }
    return 0;
}
