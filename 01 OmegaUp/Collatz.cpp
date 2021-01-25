#include <bits/stdc++.h>
using namespace std;

int main()
{   
    srand(time(NULL));

    long long int n;
    cin>>n;
    long long int pasos = 0;
    while(true)
    {
        if (n == 1)break;
        if (n%2 == 0)n/=2;
        else 
        {
            n = (n * 3) + 1;
        }
        pasos++;
    }
    cout<<pasos<<endl;


    return 0;
}