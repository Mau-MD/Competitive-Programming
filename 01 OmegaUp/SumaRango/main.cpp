#include <iostream>
using namespace std;


int main()
{
    long long int a,b, s = 0;
    cin>>a>>b;
    a--;
    cout<<(long long int)(b*(b+1)/2) - (a*(a+1)/2);
    return 0;
}
