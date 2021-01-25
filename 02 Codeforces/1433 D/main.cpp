#include <bits/stdc++.h>
using namespace std;
const int maxN = 5002;

void solve()
{
    int n;
    cin>>n;
    int g[maxN];
    bool ok = true;
    for (int i=0;i<n;i++)
    {
        cin>>g[i];
        if (i > 0 && g[i] != g[i-1])ok = false;
    //    cout<<g[i]<<" ";
    }


    if (ok)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    bool v[n];
    memset(v,false,sizeof(v));
    int i = 0;
    v[0] = true;
    for (int j=0;j<n;j++)
    {
        if (g[i] != g[j])
        {
            cout<<i+1<<" "<<j+1<<endl;
            v[j] = true;
        }
    }
    while(g[i] == g[0])i++;
    // Simplemente conecto todos los restantes
    for (int j=0;j<n;j++)
    {
        if (!v[j])
        {
            cout<<i+1<<" "<<j+1<<endl;
            v[j] = true;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    int j = 0;
    while(t--)
    {
   //     cout<<j++<<endl;
  //      cout<<endl;
        solve();
    }
    return 0;
}
