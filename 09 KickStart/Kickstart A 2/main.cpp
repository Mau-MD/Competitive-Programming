#include <iostream>
using namespace std;

void solve(int cas)
{
    int res;
    int n,k,p;
    int sumas[k][k];
    int sum = 0;
    cin>>n>>k>>p;
    int d;

    for (int i=0;i<n;i++)
    {
        sum = 0;
        for (int j=0;j<k;j++)
        {
            cin>>d;
            sum += d;
            sumas[i][j] = sum;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        {

        }
    }



    cout<<"Case #"<<cas<<": "<<res<<endl;
}

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}
