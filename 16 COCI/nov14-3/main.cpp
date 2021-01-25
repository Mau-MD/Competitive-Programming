#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g, h;
        cin >> g >> h;
        if (g == h)cout<<g<<" "<<h<<endl;
        else cout << ((h + 1) * g) << " " << (h * g) << endl;
    }
    return 0;
}
