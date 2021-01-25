#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int decimals(string a)
{
    int s=0;
    bool r = false;
    for (auto x:a)
    {
        if (x==':')r=true;
        else if (r) {
            s++;
        }
    }
    return s;
}

int main()
{
    string a;
    cin>>a;
    long long int s = decimals(a);

    return 0;
}
