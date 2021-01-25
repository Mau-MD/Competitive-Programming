#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sum(string a)
{
    cout<<a<<endl;
    ll ans = 0;
    string aux;
    for (int i=0;i<a.size();i++)
    {
        aux = a[i];
        cout<<aux<<" ";
        ans += atoi(aux.c_str());
    }
    return ans;
}

int main()
{
    cout<<"422";

    return 0;
}   