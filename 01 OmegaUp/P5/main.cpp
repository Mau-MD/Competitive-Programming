#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 0 ; i<=360; i++)
    {
       cout<<cos(cos(i))<<endl;
       cout<<sin(sin(i))<<endl;
       cout<<endl;
    }
    return 0;
}
