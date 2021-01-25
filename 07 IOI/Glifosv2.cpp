#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,s;
    string a,b;
    cin>>n>>s;

    cin>>a>>b;

    map<char,int>base, ventana;
    for (int i=0;i<a.size();i++)
    {
        base[a[i]]++;
    }


    int ans = 0;
    for (int i=0;i<b.size();i++)
    {
        ventana[b[i]]++;
        if (i>=a.size() - 1)
        {
            if (ventana == base)ans++;
            char index = b[i-(a.size() - 1)];
            ventana[index]--;
            if (ventana[index] == 0)
            {
                ventana.erase(index);
            }
        }
    }
    cout<<ans;

    return 0;
}