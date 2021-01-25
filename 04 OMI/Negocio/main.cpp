#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int maxN	= 1e5 + 2;

ll p[maxN];
ll c[maxN];
ll sum[maxN];
ll sweep[maxN];
ll ganancias[maxN];

int n;

ll querry(int i, int j)
{
    if (i == 0)return sum[j];
    else return sum[j] - sum[i-1];
}


ll bS(int i, ll busqueda) // indice, numero que busco
{
    int low = i, high = n, mid, k = i - 1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (querry(i,mid) >= busqueda)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}


int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    cin>>p[0];
    sum[0] = p[0];
    for (int i=1;i<n;i++)
    {
        cin>>p[i];
        sum[i] = p[i] + sum[i-1];
    }


    for (int i=0;i<n;i++)
    {
        int indiceFinal = bS(i,c[i]);
        indiceFinal--;
        //cout<<indiceFinal<<endl;
        if (indiceFinal >= i)
        {
            sweep[i] += 1;
            sweep[indiceFinal + 1] -= 1;
        }
        ganancias[indiceFinal + 1] += (c[i] - querry(i,indiceFinal));
        //cout<<ganancias[indiceFinal + 1]<<endl;

    }

    int line = 0;
    for (int i=0;i<n;i++)
    {
        line += sweep[i];
        ganancias[i] += line * p[i];
        //if (i == n-1)ganancias[i] += ganancias[n];
        cout<<ganancias[i]<<" ";
    }


    return 0;
}
