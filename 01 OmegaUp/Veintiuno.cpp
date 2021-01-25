#include <bits/stdc++.h>
using namespace std;

const int maxN = 10002;

int memo[maxN];

bool solve(int n, int k)
{
    for (int i=1;i<k;i++)
    {
        if (!solve(n-i, i))
        {
            return true;
        }
    }    
    return false;
}

int main()
{
    int n,k;

    cin>>n>>k;
    if (solve(n,k))
    return 0;
}