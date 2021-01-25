#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>a;
    int n;
    cin>>n;
    int dato;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        a.push_back(dato);
    }

    for (int i=0;i<n;i++)
    {
        auto it = find(a.begin(),a.end(), i+1);
        int index = distance(a.begin(),it);
        cout<<index<<endl;
    }



}