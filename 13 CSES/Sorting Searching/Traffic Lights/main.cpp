#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int n;
    cin>>n;
    set<int>ind;
    int q;
    cin>>q;

    int d, low = 0 , high = n-1;
    ind.insert(0);
    ind.insert(n);
    map<int,int>mp;
    mp[n] = 1;
    for (int i=0;i<q;i++)
    {
        cin>>d;
        auto x = ind.lower_bound(d); // Encontar al elemento que acabo de agregar
        high = *x;
        x--;
        low = *x;
        // Ya tengo el izquierdo y el derecho
        mp[high - low]--;
        if (mp[high - low] == 0)
        {
            mp.erase(high - low);
        }
        mp[d - low]++;
        mp[high - d]++;
        ind.insert(d);
        auto r = mp.end();
        r--;
        cout<<r->first<<" ";
    }
    return 0;
}
