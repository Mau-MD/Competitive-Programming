#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>v;
    int n;
    string dato;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if (v[dato] == 0)
        {
            cout<<"OK"<<endl;
            v[dato]++;
        }
        else
        {
            cout<<dato<<v[dato]<<endl;
            v[dato]++;
        }
    }
    return 0;
}
