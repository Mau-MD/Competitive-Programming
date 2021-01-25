#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,q;
    ll k;
    cin>>n>>q>>k;
    ll a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for (int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        bool flag = false;
        for (int j = x; j!=y-1; j++)
        {
            if (a[j] - a[j-1] < k){
                cout<<"No"<<endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout<<"Yes"<<endl;
        }

    }

    return 0;
}
