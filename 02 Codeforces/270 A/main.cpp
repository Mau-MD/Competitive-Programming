#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uno de 3 tiene de 360 / 3 = 120, 360 / 4 =
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        bool ok = false;
        for (double i=3.0;i<=360.0;i+=1.0f)
        {
            if ((double)(((i - 2.0f) * 180.0f) / i) == n)
            {
                cout<<"YES"<<endl;
                ok = true;
                break;
            }
        }
        if (!ok)cout<<"NO"<<endl;
    }
    return 0;
}
