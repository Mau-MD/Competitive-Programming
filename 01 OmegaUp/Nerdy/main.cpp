#include <iostream>
#include <algorithm>
int ar[5];
using namespace std;
int solve(int i, int sum)
{
    if (i >= 13)return sum;
    else return max(solve(i+1, sum), solve(i+3,sum+ar[i]));
}

int main()
{
    cout<<solve(0,0);
    return 0;
}
