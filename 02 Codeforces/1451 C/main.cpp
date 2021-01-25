#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; string a,b;
    cin>>n>>k;
    cin>>a;
    cin>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if (a == b)
    {
        cout<<"Yes";
        return;
    }

    string a_aux = a, b_aux = b;

    sort(a_aux.begin(),a_aux.end(), greater<>());
    sort(b_aux.begin(), b_aux.end(), greater<>());


    for (int i=0;i<a.size();i++)
    {
        if (a[i] > b[i])
        {
            cout<<"No";
            return;
        }
    }

    map<char,int>mp1,mp2;
    for (int i=0;i<a.size();i++)
    {
        mp1[a[i]]++;
        mp2[b[i]]++;
    }

    // Elemino repetidos
    for (auto x:mp1)
    {
//        cout<<x.first<<" "<<x.second<<endl;
        if (mp2[x.first] > 0)
        {
            int aux = mp2[x.first];
            mp2[x.first] -= min(x.second, aux);
            mp1[x.first] -= min(x.second, aux);
       //     cout<<mp2[x.first]<<" "<<mp1[x.first]<<endl;
    //        cout<<endl;
        }
    }

    for (auto x:mp2)
    {
        while (x.second > 0)x.second -= k;
        if (x.second < 0)
        {
            cout<<"No";
            return;
        }
    }

    for (auto x:mp1)
    {
 //       cout<<x.first<<" "<<x.second<<endl;
        while (x.second > 0) x.second -= k;
        if (x.second < 0)
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
    return;

    int i = 0;
    while (i < n)
    {
        while (a[i] == b[i])i++;
        for (int steps = 0; steps < k - 1 && i < n - 1; steps++, i++)
        {
            if (a[i] != a[i + 1])
            {
                cout << "No";
                return;
            }
        }
    }
    cout<<"Yes";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
