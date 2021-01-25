#include <iostream>
using namespace std;

int main()
{
    const int MAX = 21252;
    const int cycle1 = 23, cycle2 = 28, cycle3 = 33;

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    for (int i=1;i<=MAX;i++)
    {
        if (i % cycle1 == 0 && i % cycle2 == 0 && i % cycle3 == 0)
        {
            cout<<"Pos "<<i <<endl;
        }
    }

    return 0;
}
