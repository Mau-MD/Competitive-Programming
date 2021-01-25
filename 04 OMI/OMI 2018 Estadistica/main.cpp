#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll maxN = 1000002;

int n,m;
ll a[maxN];
ll q[maxN];
ll dp[maxN];

ll dif(int izq, int cen, int der) // solo pasa indices // indice de centro es del
{
    if (izq < 0)return (ll)llabs(q[cen] - a[der]);
    if (der >= n)return (ll)llabs(q[cen] - a[izq]);
    return (ll)llabs(q[cen] - a[izq]) + llabs(q[cen] - a[der]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int j=0;j<m;j++)
    {
        cin>>q[j];
    }
    sort(q,q+m);

    // local minima
    ll ans = 0; // que pasa si inicio con un cero
    for (int i=0;i<n;i++)
    {
        if (a[i] == 0) // izq y derecha son estaticos, centro cambia
        {


            int izq = i-1, der = i+1;
            while (der < n && a[der] == 0)der++;
            int low = 0, high = m-1, mid;
            bool flag = false;

            if (m == 1)
            {
                for (int j=0;j<der-i;j++)
                {
                    a[j+i]=q[0];
                }
                i+=der-i;
                continue;
            }
            if (izq < 0 && der >= n) // Out of bounds
            {
                cout<<"0"<<endl;
                for (int j=0; j<n;j++)
                {
                    cout<<q[0]<<" ";
                }
                return 0;
            }

            while (high - low != 1)
            {
                mid = (low + high)/2; // Indice de q
                ll difCen, difIzq, difDer;

                if (dp[mid] != -1)difCen = dp[mid];
                else difCen = dp[mid] = dif(izq,mid,der);
                if (dp[mid-1] != -1) difIzq = dp[mid-1];
                else difIzq = dp[mid-1] = dif(izq,mid-1,der);
                if (dp[mid+1] != -1)difDer = dp[mid+1];
                else difDer = dp[mid+1] = dif(izq,mid+1,der);


                if (difCen <= difIzq && difCen <= difDer) // local
                {
                    flag = true;
                    for (int j=0;j<der-i;j++)
                    {
                        a[i + j] = q[mid];
                    }
                    i+=der-i;
                    break;
                }
                else if (difCen <= difDer)
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }

            if (!flag)
            {
                ll difIzq = dif(izq, low, der);
                ll difDer = dif(izq, high, der);
                if (difIzq < difDer)
                {
                    for (int j=0;j<der-i;j++)
                    {
                        a[i + j] = q[low];
                    }
                    i+=der-i;
                } else
                {
                    for (int j=0;j<der-i;j++)
                    {
                        a[i + j] = q[high];
                    }
                    i+=der-i;
                }
            }

        }
    }

    for (int i=1;i<n;i++)
    {
        ans+=abs(a[i] - a[i-1]);
    }
    cout<<ans<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}