#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


int main()
{
    string n;
    cin>>n;

    if (n.size() <= 3)
    {
        // Pruebo todas las permutaciones
        if (stoi(n) % 8 == 0)
        {
            cout<<"Yes";
            return 0;
        }
        int c = 0;
        while(c <= 7)
        {
            c++;
            next_permutation(n.begin(),n.end());
            if (stoi(n) % 8 == 0)
            {
                cout<<"Yes";
                return 0;
            }
        }
        cout<<"No";
        return 0;
    }

    map<int,int>ocurr;

    for (int i=0;i<n.size();i++)
    {
        ocurr[n[i] - '0']++;
    }

    // Generar todos los multiplos de 8 hasta 1000
    for (int i=100;i<=1000;i++)
    {
        if (i % 8 == 0)
        {
        string temp = to_string(i);
        map<int,int>o;
        for (int j=0;j<temp.size();j++)
        {
            o[temp[j] - '0']++;
        }
        bool flag = false;
        for(auto x: o)
        {
            if (ocurr[x.first] < x.second)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout<<"Yes";
            return 0;
        }
        }
    }
    cout<<"No";
    return 0;
}
