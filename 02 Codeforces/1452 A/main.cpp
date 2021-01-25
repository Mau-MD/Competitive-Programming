#include <bits/stdc++.h>
using namespace std;

int x,y;
void solve()
{
    // Primero normalizar
    cin>>x>>y;
    if (y > x)swap(x,y);

    int ans = 0;
    ans += (y * 2);
    int now_x = ans / 2;
    int dist = x - now_x;
    if (dist > 0)ans += (dist * 2) - 1;
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
