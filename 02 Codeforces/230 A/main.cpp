#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>a;
    int aux[n],aux2[n];
    for (int i=0;i<n;i++)
    {
        cin>>aux[i];
    }
    for (int i=0;i<n;i++)
    {
        cin>>aux2[i];
        a.push_back({aux[i],aux2[i]});
    }
    sort(a.begin(), a.end());
    for (int i=0;i<n;i++)
    {
        if (s <= a[i].first)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            s += a[i].second;
        }
    }
    cout<<"YES";
    return 0;
}
