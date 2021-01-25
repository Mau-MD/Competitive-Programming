#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // n = 2 espacios = 3;
    int esp = 4;
    if (n != 2)esp += (n - 2) * 2;


    for (int j = 0;j < n; j++)
    {
        for (int i = 0; i < esp; i++)
        {
            cout << " ";
        }
        for (int i=0;i<j+1;i++)
        {
            if (j == 0)cout<<i;
            else cout<<i<<" ";
        }
        for (int i=j-1;i>=0;i--)
        {
            if (i == 0)cout<<i;
            else cout<<i<<" ";
        }

        esp-=2;
        cout<<endl;
    }
    esp = 0;
    for (int j = n;j >= 0; j--)
    {
        for (int i = 0; i < esp; i++)
        {
            cout << " ";
        }
        for (int i=0;i<j+1;i++)
        {
            if (j == 0)cout<<i;
            else cout<<i<<" ";
        }
        for (int i=j-1;i>=0;i--)
        {
            if (i == 0)cout<<i;
            else cout<<i<<" ";
        }
        esp+=2;
        cout<<endl;
    }
    return 0;
}
