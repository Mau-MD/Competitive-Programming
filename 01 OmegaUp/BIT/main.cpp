#include <iostream>
using namespace std;
const int mxN = 10e5;
int a[mxN], BIT[mxN],
n, q;

int LSOne(int i)
{
    return i & (-i);
}

int querry(int i)
{
    int r = 0;
    i++;
    while (i>0)
    {
        r += BIT[i];
        i -= LSOne(i);
    }
    return r;
}

void update(int i, int val)
{
    i++;
    while (i<=n)
    {
        BIT[i] += val;
        i += LSOne(i);
    }
}

void build()
{
    for (int i=0;i<n;i++)
    {
        update(i,a[i]);ß
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d, s;
    build();
    for (int i=0;i<q;i++)
    {
        cin>>d;
        if (d == 0)
        {
            cin>>s;
            cout<<querry(s)<<endl;
        }
        else
        {
            cin>>s;
            update(s, 1);
        }
    }

    return 0;
}