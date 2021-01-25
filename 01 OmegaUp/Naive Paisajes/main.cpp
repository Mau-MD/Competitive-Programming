#include <iostream>
#define MAX 1000002
#define ll long long int
using namespace std;
int n;
ll a[MAX];

ll countI(int i)
{
    ll r = 0;
    ll aux = a[i];
    i--;
    while (a[i] < aux)
    {
        if (i < 0)break;
        r++;
        i--;
    }
    return r;
}

ll countD(int i)
{
    ll r = 0;
    ll aux = a[i];
    i++;
    while (a[i] < aux)
    {
        if (i >= n)break;
        r++;
        i++;
    }
    return r;
}

ll solve(int i)
{
    if (i == 0)
    {
        return 1 + countD(i);
    }
    else if (i == n-1)
    {
        return 1 + countI(i);
    }
    else
    {
        return 1 + countI(i) + countD(i);
    }
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for (int i=0;i<n;i++)
    {
        cout<<solve(i)<<" ";
    }

    return 0;
}
