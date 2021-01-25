#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float estatura;
    while (cin>>estatura)
    {
        cout<<fixed<<setprecision(2)<<estatura * 30.48<<endl;
    }

    return 0;
}
