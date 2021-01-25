#include <iostream>
using namespace std;
int main()
{
    long long int m;
    while (cin>>m)
    {
        long long int dato;
        for (int i=0;i<m;i++)
        {
            cin>>dato;
        }

        if (m % 2 == 0)
        {
            cout<<"No"<<endl;
        } else
        {
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
