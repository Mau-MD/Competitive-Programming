#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    vector<pair<int,int>>x;
    for(int i=0;i<n;i++)
    {
        int d1, d2;
        cin>>d1>>d2;
        x.push_back({d1,d2});
    }


    sort(x.begin(),x.end());

    for (int i=1;i<n;i++)
    {
       // cout<<x[i-1].first<<" "<<x[i-1].second<<endl;
        if (x[i].second < x[i-1].second)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}
