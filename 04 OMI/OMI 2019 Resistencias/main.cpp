#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;


ll digitSum(string n)
{
    ll ans = 1;
    for (int i=0;i<n.size();i++)
    {
        ans *= (n[i] - '0');
    }
    return ans;
}

ll solve(string n)
{
    //cout<<endl;
    ll steps = 0;
    string newN = n;
    while (newN.size() > 1)
    {
        newN = to_string(digitSum(newN));
        //cout<<newN<<" ";
        steps++;
    }
    //cout<<endl;
    return steps;
}

int main()
{


    string r;

    while (true)
    {
        cin>>r;
        int steps = solve(r);
        cout<<r<<" "<<steps<<endl;
    }


    return 0;
}

// 77 es el mejor de dos dijitos