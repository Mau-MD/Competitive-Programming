#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,p, dato;
    cin>>n>>p;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while (p--)
    {
        cin>>dato;
        int i = 0, j = n, medio = i + j / 2;
        bool flag = true;
        while (i < j)
        {
            if (a[medio] == dato)
            {
                cout<<medio<<" ";
                flag = false;
                break;
            }
            else if (a[medio] > dato)
            {
                j = medio;
                medio = i + j / 2;
            }
            else if (a[medio] < dato)
            {
                i = medio;
                medio = i + j / 2;
            }
        }
        if (flag)cout<<"-1 ";
    }

    return 0;
}
