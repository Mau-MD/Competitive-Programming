#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


int main()
{
    int n;
    cin>>n;
    int five = 0, zero = 0;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        if (d == 5)five++;
        else zero++;
    }

    if (zero == 0)cout<<-1;
    else if (five < 9)cout<<0;
    else
    {
        for (int i=0;i<(five/9)*9;i++)
        {
            cout<<5;
        }
        for (int i=0;i<zero;i++)
        {
            cout<<0;
        }
    }
    return 0;
}
