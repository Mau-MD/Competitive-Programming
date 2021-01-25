#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{   
    int n,m;
    cin>>n>>m;
    int a[n][m];
    bool b[n][m];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    
    return 0;
}