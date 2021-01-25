#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        bool ok = false;
        for (auto x:mp)
        {
          //  cout<<x.first<<" "<<x.second<<endl;
            if (x.second == 1)
            {
                for (int i=0;i<n;i++)
                {
                    if (a[i] == x.first)
                    {
                        cout<<i+1<<endl;
                        ok = true;
                        break;
                    }
                }
                if (ok)break;
            }
        }
        if (!ok)cout<<-1<<endl;
    }

    return 0;
}