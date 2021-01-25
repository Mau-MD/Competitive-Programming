#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin>>n>>q;

    ll h[n],w[q];
    ll sum[n];
    for (int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    sort(h,h + n);
    for (int i=0;i<n;i++)
    {
        if (i % 2 == 1)
        {
            if (i > 1)sum[i/2] = (h[i] - h[i-1]) + sum[(i/2) - 1];
            else sum[i/2] = (h[i] - h[i-1]);
        }
    }
    ll ans = LONG_LONG_MAX;
    for (int i=0;i<q;i++)
    {
        ll now = 0;
        cin>>w[i]; // Primero intentamos con este
        int pos = upper_bound(h, h + n, w[i]) - h;
        int index = pos / 2;
        if (index - 1 >= 0)now = sum[index - 1];
        if (pos % 2 == 0) // Posicion par. Tengo que sumar el siguiente
        {
            now += (h[pos] - w[i]);
            if (now > ans)continue;
            for (int j = pos+2; j < n ; j +=2)
            {
                now += (h[j] - h[j-1]);
                if (now > ans)break;
            }
        }
        else
        {
            now += (w[i] - h[pos-1]);
            if (now > ans)continue;
            for (int j = pos+1; j < n ; j +=2)
            {
                now += (h[j] - h[j-1]);
                if (now > ans)break;
            }
        }
        ans = min(ans, now);
    }
    cout<<ans;
    return 0;
}
