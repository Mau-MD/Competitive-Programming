#include <iostream>
using namespace std;

int main()
{
    int k,p;
    cin>>k>>p;
    for (int i=1;true;i++)
    {
        int r = k * i;
        r%=10;
        if (r == 0 || r==p)
        {
                cout<<i;
                break;
        }
    }
    return 0;
}
