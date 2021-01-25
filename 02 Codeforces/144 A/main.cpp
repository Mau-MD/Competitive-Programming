#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int minn = INT_MAX, maxx = -1, indMin, indMax;

    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] <= minn)
        {
            minn = a[i];
            indMin = i;
        }
        if (a[i] > maxx)
        {
            maxx = a[i];
            indMax = i;
        }
    }

    int aux = 0;
    if (indMax > indMin)
    {
        aux = 1;
    }
    cout<<(n - indMin - 1) + (indMax) - aux;
    return 0;
}
