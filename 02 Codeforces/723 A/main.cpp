#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c; // 7 1 4 = | 6 + 3 | 6 + 3 | 3 + 3 |
    cin>>a>>b>>c;

    cout<<min(abs(b-a) + abs(c - a),min(abs(a - b) + abs(c - b),abs(a-c)+abs(b-c)));

    return 0;
}
