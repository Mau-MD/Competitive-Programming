#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> t;
    cin>>n;

    ll d; cin>>d;
    multiset<ll>ind;
    ind.insert(d);

    for (int i=1;i<n;i++)
    {
        cin>>d;
        auto x = ind.lower_bound(d+1);
        if (x == ind.end())
        {
            ind.insert(d);
        }
        else
        {
            ind.erase(x);
            ind.insert(d);
        }
    }
    cout<<ind.size();
    return 0;
}
