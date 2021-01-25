#include <bits/stdc++.h>
using namespace std;

int sum[252][252];
int n,m,k,lim; // k*k lim = per

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


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k>>lim;
    int a[n][m];
    int s = 0;
    for (int i=0;i<n;i++)
    {
        s = 0;
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
            s += a[i][j];
            sum[i][j] = s; 
            //cout<<sum[i][j]<<" ";
        }
      //  cout<<endl;
    }

    for (int i=k-1;i<n-k+1;i++)
    {
            for (int j=k-1;j<m-k+1;j++)
            {
                int ans = getSum(i,j,k);
                if (ans > lim)
                {
                    cout<<"0"<<endl;
                    return 0;
                }
            }
    }

    int querry;
    cin>>querry;
    vector<pair<int, pair<int, pair<int,int>>>>q;

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

    sort(q.begin(),q.end());

    for (auto x:q)
    {
        int xC = x.second.second.first - 1;
        int yC = x.second.second.second - 1;
        int pC = x.second.first;
        update(yC, xC, pC);

        for (int i=k-1;i<n-k+1;i++)
        {
            for (int j=k-1;j<m-k+1;j++)
            {
                int ans = getSum(i,j,k);
                if (ans > lim)
                {
                    cout<<x.first<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"-1"<<endl;




    /*
    for (auto x:q)
    {
        cout<<x.first<<" "<<x.second.first<<" "<<x.second.second.first<<" "<<x.second.second.second<<endl;
    }
    */

    return 0;
}