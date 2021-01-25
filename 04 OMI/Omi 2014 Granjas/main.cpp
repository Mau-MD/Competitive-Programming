#include <bits/stdc++.h>
#define ll long long int;
using namespace std;
const int maxN = 50002;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // i conecta a x
    // buscar ciclos

    bool v[maxN];
    memset(v,false, sizeof(v));
    vector<int>ciclos;
    for (int i=0;i<n;i++)
    {
        if (v[i])continue;
        int length = 0;
        int aux = i;
        while (true)
        {
            if(v[aux])break;
            v[aux] = true;
            length++;
            aux = a[aux] - 1;
        }
        ciclos.push_back(length);
    }
    for (int i=1;i<ciclos.size();i++)
    {
    }

    return 0;
}
