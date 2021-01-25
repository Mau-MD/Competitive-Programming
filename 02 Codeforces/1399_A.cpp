#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int d;

    priority_queue<int>smallest;

    for (int i=0;i<n;i++)
    {
        cin>>d;
        d*=-1;
        smallest.push(d); // Negative Sign
    }

    if (n == 1)
    {
        cout<<"YES"<<endl;
        return;
    }

    while (smallest.size() > 1)
    {
        int x = smallest.top() * -1;
        smallest.pop();
        int y = smallest.top() * -1;
        smallest.pop();

       // cout<<x<<" "<<y<<endl;
        if (abs(y-x) > 1)
        {
            cout<<"NO"<<endl;
            return;
        }

        x = max(x,y);
        x*=-1;
        smallest.push(x);

    }

    cout<<"YES"<<endl;
    return;

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