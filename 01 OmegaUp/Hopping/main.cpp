#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX = 1002;

int memo[MAX];

int solve(int numeros[], int n, int i)
{
    if (memo[i] != -1 && i != -1)return memo[i];
    if (i == n)return 0;
    else if (i+1 > n || i + 2 > n)return 0;
    else return memo[i] = max(solve(numeros, n,  i+1) + numeros[i+1], solve(numeros, n, i + 2) + 2 * numeros[i+2]);
}

int main()
{
    memset(memo,-1,MAX);
    int numeros[] = {4,5,6,7,4,5};
    cout<< solve(numeros,5,-1);
    return 0;
}
