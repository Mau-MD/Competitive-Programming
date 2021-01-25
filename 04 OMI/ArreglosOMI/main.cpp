#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n,j;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        j = rand() % 10;
        swap(a[i],a[j]);
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}