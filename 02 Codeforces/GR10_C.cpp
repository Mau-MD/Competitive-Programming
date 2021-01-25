#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin>>n;

    int d;
    vector<int>a;

    for (int i=0;i<n;i++)
    {
        cin>>d;
        a.push_back(d);
    }
                    cout<<" asd";

    while (true)
    {
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+2;j<n;j++)
            {
                if (a[i] + a[i+1] != a[j])
                {
                    cout<<i<<" ";
                    a.erase(a.begin() + i, a.begin() + i + 2);
                    break;
                }
            }
        }
        break;
    }
    cout<<a.size()<<endl;
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