#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll maxN = 1e5 + 2;

ll srq[maxN];
int q,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>q>>n;
    cin>>srq[0];

    int d;
    for (int i=1;i<n;i++)
    {
        cin>>d;
        srq[i] = d + srq[i-1];
    }

    for (int i=0;i<q;i++)
    {
        ll x;
        cin>>x;

        if (x == 0)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        auto y = lower_bound(srq, srq+n, x);
        ll indice = y - srq; // Indice 3

        if (indice >= n)
        {
            cout<<n<<" "<<(ll)x - srq[n-1]<<endl;
            continue;
        }

        if (srq[indice] != x)indice--;
        if (indice == -1)
        {
            cout<<"0 "<<x<<endl;
            continue;
        }
        cout<<(ll)indice + 1LL<<" "<<(ll)x - srq[indice]<<endl;



    }

    return 0;
}