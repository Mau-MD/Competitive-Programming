#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;

int main()
{
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];

    if (a[0] == a[1] && a[1] == a[2])
    {
        cout<<0;
        return 0;
    }

    ll index = 0, maxx = 0;
    for (int i=0;i<3;i++)
    {
        if (a[i] >= maxx)
        {
            maxx = a[i];
            index = i;
        }
    }

    maxx--;
    ll ans = 0;
    for (int i = 0; i < 2; i ++)
    {
        index = (index + 1) % 3;
        if (a[index] == maxx + 1)continue;
        ans += (maxx - a[index]);
    }

    cout<<ans;


    return 0;
}
