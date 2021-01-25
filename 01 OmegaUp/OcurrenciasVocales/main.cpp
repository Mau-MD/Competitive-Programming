#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int av = 0,e = 0,i = 0,o = 0,u = 0;
    for (int i=0;i<a.size();i++)
    {
        if (a[i]=='a' || a[i] == 'A')av++;
        if (a[i]=='e' || a[i] == 'E')e++;
        if (a[i]=='i' || a[i] == 'I')i++;
        if (a[i]=='o' || a[i] == 'O')o++;
        if (a[i]=='u' || a[i] == 'U')u++;
    }
    cout<<av<<" "<<e<<" "<<i<<" "<<o<<" "<<u;
    return 0;
}
