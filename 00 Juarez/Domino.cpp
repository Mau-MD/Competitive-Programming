#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int dp[n];
    dp[1] = 3;
    int p = ((n+1)*(n+2))/2;
    p *= n;
    cout<<"Lau: "<<p<<endl;

    for (int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + (i * (i+1)) + ((i * (i+1)) / 2);
    }
    cout<<"Mau: "<<dp[n];                   

    
}