#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        ll a,b,x,y,n; 
        cin>>a>>b>>x>>y>>n;

        ll auxA = a;
        ll auxB = b;
        // ans1 
        ll ans1; // priorizando a
        ll dif = a - x;
        if (dif >= n)
        {
            a = a - n;
            ans1  = a * b;
        }
        else
        {
            a = a - dif;
            dif = n - dif;
            if (dif > b - y) b = b - (b-y);
            else b = b - dif;
            ans1 = a * b;
        }
      //  cout<<"ans1 " << ans1<<" ";

        a = auxB;
        b = auxA;
        swap(x,y);
        ll ans2; 
        dif = a - x;
      //  cout<<"dif "<<dif;
        if (dif >= n)
        {
            a = a - n;
            ans2  = a * b;
        }
        else
        {
            a = a - dif;
            dif = n - dif;
            if (dif > b - y) b = b - (b-y);
            else b = b - dif;
            ans2 = a * b;
        }
        cout<<min(ans1, ans2)<<endl;
    }
        /*
        if (a == b)
        {
            ll difA = a - x;
            ll difB = b - y;

            if (difB > difA) // le doy prioridad a A
            {
                swap(a,b);
                swap(x,y);
            }

        }
     
        else if ( a > b)
        {
            swap(a,b);
            swap(x,y);
        }
        ll dif = a - x;
        if (dif >= n)
        {
            a = a - n;
            cout<<a * b<<endl;
            continue;
        }
        //cout<<"dif "<<dif<<endl;
        a = a - dif;
        dif = n - dif; // restante
        if (dif > b - y) b = b - (b-y);
        else b = b - dif;
        cout<<a * b<<endl;

    }
    */

    return 0;
}