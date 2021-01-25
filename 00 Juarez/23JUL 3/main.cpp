#include <bits/stdc++.h>
using namespace std;

int m;
int p;
vector<int>valores;

int solve(int n, int sP)
{
    if (n == 1)
    {
        while (sP > n)sP-=n;
        return valores[1];
    }
    else
    {
        sP += p - 1;
        while (sP > n)sP-=n;
        valores.erase(valores.begin() + sP);
        return solve(n-1, sP);
    }
}

/*
int solve(int n, int sP)
{
    if (n == 2)
    {
        while (sP > n)
        {
            sP-=n;
        }
        if ((p%2 == 1 && sP == 1) || (p%2 == 0 && sP == 2))
        {
            cout<<valores[2];
            return 0;
        }
        else if ((p%2 == 1 && sP == 2) || (p%2 == 0 && sP == 1))
        {
            cout<<valores[1];
            return 0;
        }
    }
    else
    {
        sP += p - 1;
        while (sP > n)sP-=n;

        valores.erase(valores.begin() + sP);

        for (auto x:valores)
        {
            cout<<x<<" ";
        }
        cout<<"\n";

        solve(n-1, sP);
    }
}
*/

int main()
{
    cin>>m>>p;
    valores.push_back(0);
    for (int i=1;i<=m;i++)
    {
        valores.push_back(i);
    }
    cout<<solve(m,1);

    return 0;
}
