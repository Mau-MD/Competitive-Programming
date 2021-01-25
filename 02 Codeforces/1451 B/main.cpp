#include <bits/stdc++.h>
using namespace std;

int n,q; string a;


void solve()
{

    cin>>n>>q;
    cin>>a;
    while (q--)
    {
        bool ok = false;
        int l,r; cin>>l>>r;
        if (l == 1 && r == n)
        {
            cout<<"NO"<<endl;
            continue;
        }

        char final = a[r-1];

        if (r < n)
        {
            for (int i = r; i < n; i++)
            {
                if (a[i] == final)
                {
                    cout << "YES" << endl;
                    ok = true;
                    break;
                }
            }
        }
        if (ok)continue;

        char inicio = a[l-1];
        if (l > 1)
        {
            for (int i = l - 2; i >= 0; i--)
            {
                if (a[i] == inicio)
                {
                    cout << "YES" << endl;
                    ok = true;
                    break;
                }
            }
        }
        if (ok)continue;

        cout<<"NO"<<endl;

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
