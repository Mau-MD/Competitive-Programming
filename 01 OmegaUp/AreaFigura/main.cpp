#include <iostream>
using namespace std;

// 1 5 13 25
//  4 8  12
//   4  4

// A = 4 B = 4 C = 1
//2 N ^ 2 -2n + 1
int main()
{
    long long int n;
    cin>>n;
    cout<<(long long int) 2 * (n * n) - (2 * n) + 1;
    return 0;
}
