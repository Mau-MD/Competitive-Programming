#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int n;
ll a[5002];
ll maxx = -1;
ll sum = 0;

vector<int>divisores;

void getDivisores(ll x)
{
    for (int i=maxx;i<=x/2;i++)
    {
        if (x % i == 0)divisores.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    bool same = true;
    cin>>a[0];
    maxx = max(maxx,a[0]);
    sum+=a[0];
    for (int i=1;i<n;i++)
    {
        cin>>a[i];
        maxx = max(maxx,a[i]);
        sum+=a[i];
        if (a[i] != a[i-1])same = false;
    }
    if (same)
    {
        cout<<sum/a[0];
        return 0;
    }
    getDivisores(sum);

    ll ans = 0;
    for (int i=0;i<divisores.size();i++)
    {
        ll currentD = divisores[i];
        for (int j=0;j<n;j++)
        {
            ll val=0;
            int index = 0;
            ll sumA = 0;

            for (int k =0; k<n;k++)
            {
                index = (k + j) % n;
                sumA+=a[index];
                if (sumA == currentD)
                {
                    sumA = 0;
                    val++;
                }
                else if (sumA > currentD)
                {
                    val = 0;
                    break;
                }
            }

            if (val > 0) // Encontre respuestas
            {
                cout<<val;
                return 0;
            }
        }
    }
    cout<<ans;
    return 0;
}
