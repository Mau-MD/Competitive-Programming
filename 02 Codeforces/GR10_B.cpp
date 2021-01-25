#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll a[n];
    bool neg = false;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]<0)neg = true;
    }

    if (n==1)
    {
        cout<<"0"<<endl;
        return;
    }
    
    ll maxx = - 10e+9;
    for (int i=0;i<n;i++) 
    {
        maxx = max(maxx,a[i]);
    }

    for (int i=0;i<n;i++) // k == 1
    {
        a[i] = maxx - a[i];
    }


    if (maxx < 0)
    {
        int ans = 1;

        for (int i=0;i<2;i++) // Numero de op
        {
            if (k == ans)
            {
                for (int x=0;x<n;x++)
                {
                    cout<<a[x]<<" ";
                    return;
                }
            }
            for (int x=0;x<n;x++) 
            {
                maxx = max(maxx,a[x]);
            }

            for (int x=0;x<n;x++) // k == 1
            {
                a[x] = maxx - a[x];
            }
            ans++;
        }

    }

    if (k % 2 == 1)
    {
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        maxx = - 10e+9;
        for (int i=0;i<n;i++) 
        {
            maxx = max(maxx,a[i]);       
        }

        for (int i=0;i<n;i++) // k == 1
        {
        cout<< maxx - a[i]<<" ";
        }   
    }

    cout<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}