#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,m,querry;
    cin>>n>>m>>querry;
    //bool chat[n][m];

    vector<int> list[10000000];
    bool dato;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>dato;
            if (dato!=0)list[j].push_back(i);
        }
    }

    ll received[n*m];
    ll sent[n*m];
    ll ans[n*m];

    for (int i=0;i<m*n;i++)
    {
        received[i] = 0;
        sent[i] = 0;
        ans[i] = 0;
    }

    for (int i=0;i<querry;i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
       // cout<<"y: "<<y<<endl;
        received[y]++;
        sent[x]++;
    }

/*
    for (int i=0;i<m;i++)
    {
        cout<<received[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<sent[i]<<" ";
    }
    cout<<endl;
*/
    for (int i=0;i<m;i++) // chat
    {
        for (int j=0;j<list[i].size();j++) // whos in th chat
        {
           //  cout<<"list:  "<<list[i][j]<<endl;
            ans[list[i][j]] +=  received[i];
        }
  //      cout<<endl;
    }


    for (int i=0;i<n;i++)
    {
        //cout<<ans[i]<<" ";
        ans[i]-=sent[i];
        cout<<ans[i]<<"  ";
    }
    return 0;
}