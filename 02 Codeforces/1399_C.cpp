#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define EPS 100

int can(int s, int a[], int n)
{
    int i = 0, j = n-1;
        int sum  = 0; 

    while (i < j)
    {
        if (a[i] + a[j] == s)
        {
            sum++;
            j--;
            i++;
        }
        else if (a[i] + a[j] < s)i++;
        else j--;
    }
    return sum;
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int ans = 0;
    int maxTest = a[n-2] + a[n-1];
    for (int i=2;i<=maxTest;i++)
    {

    ans = max(ans,can(i,a,n));
     //   cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;

}
// 1 1 1 1 2 2 2 2
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}