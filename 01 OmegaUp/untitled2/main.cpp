#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num1, res;
    float num3;
    cin>>num1>>num3;
    res=num1%2;
    if(num1 > 5 && res != 0)
    {
        res=res+5;
        num1=num1*2;
    }
    else
    {
        res=num1;
        num1=pow(res, num3);
    }

    cout<<res<<", "<<num1<<endl;
    return 0;
}