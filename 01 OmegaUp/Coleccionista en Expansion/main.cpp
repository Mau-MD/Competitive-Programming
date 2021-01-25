#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,d;
    cin>>n;
    map<long long int,long long int>col,col2;
    for (long long int i=0;i<n;i++)
    {
        cin>>d;
        col[d]++;
    }
    cin>>m;
    for (long long int i=0;i<m;i++)
    {
        cin>>d;
        col2[d]++;
    }
    long long int ans =0 ;
    for (auto x:col2)
    {
            if (col[x.first] == 0)ans++;
    }
    cout<<ans;

    return 0;
}
