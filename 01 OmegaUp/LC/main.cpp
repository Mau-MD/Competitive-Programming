#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

const int MAX = 1000;

int memo[MAX][MAX];
string a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(memo,0,MAX*MAX);
    cin>>a>>b;

    int n = a.size();
    int m = b.size();

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (a[i-1] == b[j-1]) memo[i][j] = memo[i-1][j-1] + 1;
            else memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
        }
    }


    cout<<memo[n][m];
    /*        A B C T F
     *      0 0 0 0 0 0
     *    A 0 1 1 1 1 1
     *    C 0 1 1 2 2 2
     *    T 0 1 1 2 3 3
     */


    return 0;
}
