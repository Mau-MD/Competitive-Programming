#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,minn,maxx;
    cin>>n>>m>>minn>>maxx;

    bool f = false, s = false;
    int x;
    for (int i=0;i<m;i++)
    {  
       cin>>x;
       if (x > maxx || x < minn)
       {
           cout<<"Incorrect";
           return 0;
       }
       if (x == minn && !f)f = true;
       else if (x == maxx)
       {
           cout<<"Correct";
           return 0;
       }
    }

    if (n - m >= 2)
    {
        cout<<"Correct";
        return 0;
    }
    else if ((f && n-m >=1) || (s && n - m >=1))
    {
        cout<<"Correct";
        return 0;
    }
    cout<<"Incorrect";
    return 0;
}