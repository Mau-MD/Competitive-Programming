#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;
int aux[MAX];

int solve(int ar[], int n, int i, int p, int r)
{

    if (n <= 2)
    {
        return 0;
    }
    else
    {
        if (i>=0)
        {
            ar[i] = aux[i];
            ar[i] += r;
        }
        //cout<<ar[i]<<endl;
        if (i <= 1 || ar[i-1] - ar[i] == ar[i-2] - ar[i-1])
        {
            if (i==n-1)
            {
                return p;
            }
            return min(solve(ar,n,i+1,p+1,1),min(solve(ar,n,i+1,p+1,-1),solve(ar,n,i+1,p,0)));
        }
        return MAX;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<n;i++)
    {
        aux[i] = a[i];
    }
    int r = solve(a,n,-1,0,0);
    if (r == MAX)cout<<-1;
    else
    {
        cout<<r;
    }
    return 0;
}
