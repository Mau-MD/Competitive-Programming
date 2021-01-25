#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    map<char,int>check;
    getline(cin, a);
    getline(cin, b);
    for (int i=0;i<b.size();i++)
    {
        check[b[i]]++;
        check[' ']=0;
    }
    string res;
    for (int i = 0; i < a.size(); i++)
    {
        if (check[a[i]]==0)res+=a[i];
    }
    cout<<res;
    return 0;
}
