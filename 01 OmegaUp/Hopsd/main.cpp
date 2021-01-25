#include <iostream>
#include <algorithm>
using namespace std;

int casilla[12] = {2,3,5,3,4,6,4,5,8,5,6,9};

int faq(int i)
{
    if (i==11)return 0;
    if (i + 1 > 11)return 0;
    else return max(faq(i+1) + casilla[i+1], faq(i+2) + casilla[i+2]*2);
}


int main()
{
    cout<<faq(-1)<<endl;
    return 0;
}
