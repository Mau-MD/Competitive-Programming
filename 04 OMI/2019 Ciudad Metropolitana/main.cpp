#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN = 207;
int n,m,k;
ll lim;
int bit[maxN + 1][maxN + 1];

int LSB(int x){
    return x & (-x);
}

int query(int x, int y){
    int sum = 0;
    for(int x_ = x; x_ > 0; x_ = x_ - LSB(x_)){
        for(int y_ = y; y_ > 0; y_ = y_ - LSB(y_)){
            sum = sum + bit[x_][y_];
        }
    }
    return sum;
}

int query(int x1, int y1, int x2, int y2){
    return (query(x2, y2) - query(x1 - 1, y2) - query(x2, y1 - 1) + query(x1 - 1, y1 - 1));
}

void update(int x, int y, int value){
    // also update matrix[x][y] if needed.

    for(int x_ = x; x_ <= n; x_ = x_ + LSB(x_)){
        for(int y_ = y; y_ <= m; y_ = y_ + LSB(y_)){
            bit[x_][y_] += value;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k>>lim;

    for (int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            bit[i][j] = 0;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            int dato;
            cin>>dato;
            update(i + 1, j + 1, dato);
        }
    }

    int q;
    pair<int,int>coord;
    pair<int,pair<int,int>>pCoord;
    vector<pair<int,pair<int,pair<int,int>>>>querryData;

    // t x i j
    cin>>q;
    for (int qq=0;qq<q;qq++)
    {
        int i,j,x,t;
        cin>>i>>j>>x>>t;
        coord = make_pair(i,j);
        pCoord = make_pair(x,coord);
        querryData.push_back(make_pair(t,pCoord));
    }

    /*
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<query(1,1,i+1,j+1)<<" ";
        }
        cout<<endl;
    }
    */

    sort(querryData.begin(),querryData.end());

    int horRep = m - k + 1;
    int verRep = n - k + 1;
    int x1, y1, x2, y2;

    for (int i=0;i<verRep;i++)
    {
        for (int j=0;j<horRep;j++)
        {
            x1 = j + 1;
            y1 = i + 1;
            x2 = x1 + k - 1;
            y2 = y1 + k - 1;
            ll sum = query(x1,y1,x2,y2);
            if (sum > lim)
            {
                cout<<0<<endl;
                return 0;
            }
        }
    }

    for (int qq=0;qq<q;qq++)
    {
        int i_,j_,per,t;
        i_ = querryData[qq].second.second.first;
        j_ = querryData[qq].second.second.second;
        per = querryData[qq].second.first;
        t = querryData[qq].first;

        update(i_,j_,per);

        for (int i=0;i<verRep;i++)
        {
            for (int j=0;j<horRep;j++)
            {
                x1 = j + 1;
                y1 = i + 1;
                x2 = x1 + k - 1;
                y2 = y1 + k - 1;
                ll sum = query(x1,y1,x2,y2);
                if (sum > lim)
                {
                    cout<<t<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
