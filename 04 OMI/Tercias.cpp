#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll ans= 0;
    for (int i = 1; i<n-1;i++)
    {
        int s = i-1, e = i+1;
        ll obj = 2 * a[i];
        while (true)
        {
            //1cout<<"s "<<s<<" e "<<e<<endl;
            if (s == -1 || e == n)break;
            ll sum = a[s] + a[e];
            if (sum == obj)
            {
                s--;
                e++;
                ans++;
            }
            else if (sum < obj)
            {
                e++;
            }
            else
            {
                s--;
            }
        }
    }
    cout<<ans;
}