#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, dato;
    cin>>n;

    bool a[1000000];

    for (int i=2;i<=1000000;i++)
    {
        if (a[i])
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = false;
            }
        }
    }

    return 0;
}