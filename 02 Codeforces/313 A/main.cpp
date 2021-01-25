#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string a;
    cin>>a;
    if (a[0] != '-')cout<<a;
    else
    {
        string x = a.substr(a.size()-1,1); // Ultima
        string y = a.substr(a.size()-2,1); // No ultima
        if (stoi(x) < stoi(y)) // Eliminar penultimo
        {
            for (int i=0;i<a.size();i++)
            {
                if (i ==0 && a[i+2] == '0')
                {
                    cout<<a[i+2];
                    break;
                }
                if (i != a.size()-2)
                {
                    cout<<a[i];
                }
            }
        }
        else
        {
            for (int i=0;i<a.size()-1;i++)
            {
                if (i ==0 && a[i+1] == '0')
                {
                    cout<<a[i+1];
                    break;
                }
                cout<<a[i];
            }
        }
    }
    return 0;
}
