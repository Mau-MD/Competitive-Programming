#include <bits/stdc++.h>
using namespace std;

int n,m,k,lim; 
int a[252][252];
int sum[252][252];

vector<pair<int, pair<int, pair<int,int>>>>q;
int querry;

int getSum(int i,int j, int k)
{

    int ans = 0;
    for (int x = i, steps = 0; steps < k ; x--, steps++)
    {
        if (j - k >= 0)ans += sum[x][j] - sum[x][j-k];
        else ans += sum[x][j];
    }
    return ans;
}

void update(int i,int j, int val)
{
    for (int x=i;x<m;x++)
    {
        sum[i][x] += val;
    }
}


void sb0()
{
    for (int i=k-1;i<n-k+1;i++)
    {
            for (int j=k-1;j<m-k+1;j++)
            {
                int ans = getSum(i,j,k);
                if (ans > lim)
                {
                    cout<<"0"<<endl;
                    return;
                }
            }
    }
    cout<<"-1";
}

void sb1()
{

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a[i][j] > lim)
            {
                cout<<"0";
                return;
            }
        }
    }

    for (auto x:q)
    {
        int j = x.second.second.first -1; // x
        int i = x.second.second.second -1; // y 

        int val = x.second.first;
        a[i][j]+=val;
        if (a[i][j] > lim)
        {
            cout<<x.first<<endl;
            return;
        }
    }
    cout<<"-1";
}

int main()
{
    cin>>n>>m>>k>>lim;
    int s = 0;
    

    for (int i=0;i<n;i++)
    {
         s =0;
        for (int j=0;j<m;j++)
        {   
            cin>>a[i][j];
            s += a[i][j];
            sum[i][j] = s; 
        }
    }

    cin>>querry;


    if (querry == 0)
    {
        sb0();
        return 0;
    }

    for (int i=0;i<querry;i++)
    {
        int x,y,per,t;
        cin>>x>>y>>per>>t;
    
        // List of time - person - x - y
        pair<int,int>coord;
        coord = make_pair(x,y);

        pair<int, pair<int,int>>pcoord; 
        pcoord = make_pair(per,coord);
        q.push_back(make_pair(t,pcoord));
    }
 
    if (k == 1)
    {
        sb1();
        return 0;
    }



    return 0;
}