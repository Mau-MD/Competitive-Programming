#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        if ( a > b)swap(a,b);
        if ((b-a) % 10 == 0)cout<<(b-a) / 10<<endl;
        else cout<<(b-a) / 10 + 1<<endl;

    }

    return 0;
}