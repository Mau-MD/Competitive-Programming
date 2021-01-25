#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string>a,aux,c;
    int n;
    cin>>n;
    string b;
    for (int i=0;i<n;i++)
    {
     cin>>b;
     aux.push_back(b);
     for (int j=0;j<b.size();j++)
     {
         b[j] = tolower(b[j]);
     }
     a.push_back(b);
     c.push_back(b);
    }

    sort(a.begin(),a.end());
    int indJ = 0, indI = 0;

    for (int i=0;i<a.size();i++)
    {
        for (int j=0;j<a.size();j++)
        {
            if (a[i] == c[j])
            {
                c[j] = "-1";
                indJ = j;
                indI = i;
                for (int x = 0; x < aux[indJ].size(); x++)
                {
                    a[indI][x] = aux[indJ][x];
                }
                break;
            }

        }
    }

    c = a;
    for (int i=0;i<c.size();i++)
    {
        for (int j = 0; j < c[i].size(); j++)
        {
            c[i][j] = tolower(c[i][j]);
        }
    }
    for (int i=1;i<a.size();i++)
    {
        if (c[i] == c[i-1])
        {
            vector<string>miniAux;
            miniAux.push_back(a[i]);
            miniAux.push_back(a[i-1]);
            sort(miniAux.begin(),miniAux.end());
            a[i-1] = miniAux[0];
            a[i] = miniAux[1];
        }
    }

    for (auto x:a)
    {
        cout<<x<<endl;
    }



    return 0;
}
