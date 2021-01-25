#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ax,b;
    cin>>ax>>b;
    int num = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] >= ax && a[i] <=b)
        {
            num++;
        }
    }
    cout<<num;

    return 0;
}
