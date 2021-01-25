#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int n;
    cin>>n;
    ll sum[n];
    ll ans = 0;
    memset(sum,0,sizeof(sum));
    set<ll>recurr;
    recurr.insert(0);
    for (int i=1;i<=n;i++)
    {
        cin>>sum[i];
        ll aux = sum[i];
        sum[i] = sum[i] + sum[i-1];

        if (recurr.count(sum[i]))
        {
            ans++;
            recurr.clear();
            recurr.insert(0);
            sum[i] = aux;
        }
        recurr.insert(sum[i]);

    }
    cout<<ans;


    return 0;
}
