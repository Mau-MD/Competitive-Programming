#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int memo[MAX];

int DP(int num)
{
    if (num == 1)return 0;
    else
    {
        if (!(num&1))
        {
            return memo[num] = min(DP(num - 1)+1, DP(num / 2) + 1);
        } else
        {
            return memo[num] = DP(num+1)+1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n, natural=0; string bits;
    cin>>n>>bits;
    reverse(bits.begin(), bits.end());
    for (int i=0;i<n;i++)
    {
        if (bits[i] == '1')
        {
            natural += pow(2,i);
        }
    }
    memset(memo, -1, sizeof(memo));
    cout<<DP(natural);




    return 0;
}
