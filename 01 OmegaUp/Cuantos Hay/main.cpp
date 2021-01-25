#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    map<int,int>horizontal, vertical;
    int n,m;
    cin>>n>>m;
    int arrH[n],arrV[m];
    for (int i=0;i<n;i++)
    {
        cin>>arrH[i];
    }
    for (int i=0;i<m;i++)
    {
        cin>>arrV[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            horizontal[arrH[j] - arrH[i]]++;
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=i+1;j<m;j++)
        {
            vertical[arrV[j] - arrV[i]]++;
        }
    }
    int cuadrados =0;
    int limite = max(arrV[m-1], arrH[n-1]);
    for (int i=0;i<limite;i++)
    {
        cuadrados = cuadrados + (vertical[i] * horizontal[i]);
    }
    cout<<cuadrados;
    return 0;
}
