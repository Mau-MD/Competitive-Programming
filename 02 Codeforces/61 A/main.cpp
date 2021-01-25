#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for (int i=0;i<a.size();i++)
    {
        int x = a[i] - '0';
        int y = b[i] - '0';
        if (x != y)cout<<1;
        else cout<<0;
    }
    return 0;
}
