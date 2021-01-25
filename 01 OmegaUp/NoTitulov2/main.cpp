#include <iostream>
#define ll unsigned long long int
using namespace std;
int main()
{
    ll a,b;
    cin >> a>>b;
    if (a % 2 == 0 || a % b == 0 || a % b == 1)
    {
        cout << "No";
        return 0;
    } else
    {
        cout<<"Si";
       
    }

    return 0;
}
