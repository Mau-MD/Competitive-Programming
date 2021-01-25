#include <bits/stdc++.h>
using namespace std;
const int maxN = 1002;

int n,m;
char mat[maxN][maxN];
queue<string>cambios;

string ans;

string check()
{
    queue<string>aux = cambios;
    string base = "";

    while(!aux.empty())
    {
        base += aux.front();
        aux.pop();
    }
    return base;
}

void cambiar()
{
    char aux[m];
    for (int i=0;i<n;i++)
    {
        aux[i] = mat[i][0];
    }
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            mat[i][j] = mat[i][j+1];
        }
    }
    for (int i=0;i<n;i++)
    {
        mat[i][m-1] = aux[i];
    }

    while(!cambios.empty())cambios.pop();

    for (int i=0;i<n;i++)
    {
        string next = "";
        for (int j = 0; j < m; j++)
        {
            next += mat[i][j];
        }
        cambios.push(next);
    }
}

int main()
{

    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        cambios.push(a);

        for (int j=0;j<m;j++)
        {
            mat[i][j] = a[j];
        }

    }

    ans = check();

    // Cambiar hacia arriba

    for (int j=0;j<m;j++)
    {
        for (int i = 0; i < n; i++) // Checar nivel lexi
        {
            string aux = cambios.front();
            cambios.pop();
            cambios.push(aux);
            string neww = check();
            if (neww < ans)
            {
                ans = neww;
                string x = ans;
            }
        }
        cambiar();
    }

    for (int i=0;i<n*m;i++)
    {
        if (i % m == 0)cout<<endl;
        cout<<ans[i];
    }
    return 0;
}