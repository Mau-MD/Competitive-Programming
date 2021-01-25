#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;

    if (n == m)cout<<"0 0";
    else if (m-1 == n)cout<<"1 1";
    else
    {
        ll maxx, minn;

        ll sum = (n - (m-1))-1;
        maxx = (sum * (sum+1))/2;
        
        ll count = n/m;
        count--;
        ll rest = n % m;
        ll primSum = (count * (count+1))/2; // Calcular normales
        ll secSum = ((count + 1) * ((count + 1)+1))/2; // Calcular los que tienen extra
        minn = rest * secSum + (m-rest) * primSum;

        cout<<minn<<" "<<maxx;
    
    }

    return 0;
}