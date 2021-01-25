#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    ll ans = 0, fin = 0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (i>0)
        {
            if (a[i] >= a[i-1])
            {
                fin = max(ans, fin);
                ans = 0;
            }
        }
        ans++;
    }

    fin = max(ans,fin);
    
    cout<<fin<<endl;


    return 0;
}