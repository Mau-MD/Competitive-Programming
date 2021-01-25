#include <bits/stdc++.h>
#define ll long long int
const ll maxN = 2000002;
int n;
int a[maxN];
ll BIT[maxN];

using namespace std;

void update(int x, int val)
{
      for(; x <= n; x += x&-x)
        BIT[x] += val;
}

ll querry(int x) // Return sums of the first x numbers
{
    ll sum = 0;
    for (; x > 0; x -= x&-x)
    {
        sum += BIT[x]; 
    }
    return sum;
}

void solve(int t)
{
    cout<<"Case: "<<t<<endl;
    for (int i=0;i<n;i++)
    {
        BIT[i] = 0;
    }

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        update(i+1,a[i]);
    }

    while (true)
    {
        char input;
        cin>>input;
        if (input == 'E')
        {
            cin>>input;
            cin>>input;
            break;
        }
        else if (input == 'M') 
        {
            int x, y;
            cin>>x>>y; // Distance
            if (x == 1)
            {
                cout<<(ll)querry(y)<<endl;
            }
            else 
            {
                ll x_sum = querry(x-1);
                ll y_sum = querry(y);
                cout<<(ll)y_sum - x_sum<<endl;
            }
        }
        else
        {
            int x,val;
            cin>>x>>val;
            int diff = val - a[x-1];
            update(x,diff);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    while (true)
    {
        cin>>n;
        if (n == 0)break;
        t++;
        solve(t);
        cout<<endl;
    }

    return 0;
}
