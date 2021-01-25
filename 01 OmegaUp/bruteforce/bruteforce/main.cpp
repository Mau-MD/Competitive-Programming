#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define MAX 1000005
int n, u, q;
int a[MAX], dif[MAX-1];


void updateData(int index, int val)
{
    a[index - 1] += val;
    dif[index-2] = abs(a[index - 1] - a[index-2]);
    dif[index-1] = abs(a[index - 1] - a[index]);

}

int main()
{
    cin >> n >> u >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            dif[i - 1] = abs(a[i] - a[i - 1]);
        }
    }

    map<int,pair<int,int>>updates;

    for (int i=0;i<u;i++)
    {
        int x,h,m;
        cin>>x>>h>>m;
        updates[m] = make_pair(x,h);
    }

    auto it = updates.begin();
    for (int i=0;i<q;i++)
    {
        int ri,rf,m;
        cin>>ri>>rf>>m;
        while((*it).first <= m)
        {
            if (it == updates.end())break;
            updateData((*it).second.first, (*it).second.second);
            it++;
        }
        /*
        for (int x=0;x<n-1;x++)
        {
            cout<<dif[x]<<" ";
        }
        cout<<endl;
         */
        int suma = 0;
        for (int x=ri-1;x<=rf-2;x++)
        {
            suma += dif[x];
        }
        cout<<suma<<endl;
    }

    return 0;
}
