#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        auto y = lower_bound(a, a + n, x);
        ll ans = y - a;
       // cout<<"ans "<<ans<<endl;
       bool flag = false;
        if (a[ans] == x)
        {
            ll aux = ans;
            while (a[aux] == x)
            {
                aux++;
                if (aux >= n)
                {
                    cout<<a[ans-1]<<" X"<<endl;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                if (ans - 1 >= 0 && aux < n)
                {
                    cout << a[ans - 1] << " " << a[aux] << endl;
                } else if (ans - 1 < 0)
                {
                    cout << "X " << a[aux] << endl;
                } else
                {
                    cout << a[ans - 1] << " X" << endl;
                }
            }
        }
        else if (ans == n)
        {
            cout<<a[ans-1]<<" X"<<endl;
        }
        else // el primer mayor a x
        {
            if (ans-1 < 0)
            {
                cout<<"X "<<a[ans]<<endl;
            }
            else
            {
                cout<<a[ans-1]<<" "<<a[ans]<<endl;
            }
        }


    }

    return 0;
}
