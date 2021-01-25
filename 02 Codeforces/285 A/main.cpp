#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if (k == 0)
    {
        for (int i=0;i<n;i++)
        {
            cout<<i+1<<" ";
        }
    }
    else
    {
        int j = n;
        for (int i=0;i<k;i++)
        {
            cout<<j--<<" ";
        }
        j = 1;
        for (int i=0;i<n-k;i++)
        {
            cout<<j++<<" ";
        }
    }
    return 0;
}
