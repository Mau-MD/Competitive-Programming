#include <bits/stdc++.h>
using namespace std;
int main ()
{
    map <char,int> check;
    string a;
    cin>>a;

    for (int i=0;i<a.size();i++)
    {
        check[a[i]]++;
    }

    for (auto itr=check.begin();itr!=check.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}