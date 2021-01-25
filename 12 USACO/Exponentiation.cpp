#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 7;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<exponente(a,b)%MOD;

    }
    return 0;
}