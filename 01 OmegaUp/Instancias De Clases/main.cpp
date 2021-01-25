#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a;
    map<string,int>ref, ref2;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        cin>>a;
        ref[a]=i;
        ref2[a]=i;
        getline(cin,a);
    }

    if (m == 0 )
    {
        cout<<n;
        return 0;
    }
    string aux1,aux2;
    for (int i=0;i<m;i++)
    {
        cin>>aux1;
        cin>>a;
        cin>>aux2;
        aux2.pop_back();
        ref2[aux1] = ref2[aux2];
    }
    bool taken[102];
    int maxi = n;
    for (auto it = ref2.begin(); it!=ref2.end();it++)
    {
        if (!taken[(*it).second])
        {
            taken[(*it).second] = true;
        }
        else
        {
            maxi--;
        }
    }
    cout<<maxi;
    return 0;
}
