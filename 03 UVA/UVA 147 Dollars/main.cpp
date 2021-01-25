#include <bits/stdc++.h>

#define MAX 300002
#define ll long long int
using namespace std;

int n;
int goal;
ll dp[12][MAX];
ll coins[] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};

int read(string a)
{
    string b;
    for (int i=0;i<a.size();i++)
    {
        if (a[i] != '.')b.push_back(a[i]);
    }
    int v = stoi(b);
    return v;
}

int getSpace(int n)
{
    if (n>=100)return 0;
    if (n>=10)return 1;
    return 2;

}
int getDigits(ll n)
{
    int d = 0;
    while (n!=0)
    {
        n/=10;
        d++;
    }
    return d;
}

void solve()
{
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 0; j <= goal; j++)
        {
            if (j == 0)dp[i][j] = 1;
            else
            {
                if (j - coins[i - 1] < 0)dp[i][j] = dp[i - 1][j];
                else dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    goal = 300*100/5;
    solve();

    while (true)
    {
        string a;
        cin>>a;
        n = read(a);
        if (n == 0)break;

        goal = n/5;
        int d = getDigits(dp[11][goal]);
        int d1 = getSpace(n/100);

        for (int i=0;i<d1;i++)
        {
            cout<<" ";
        }
        cout<<a;
        for (int i=0;i<17 - d;i++)
        {
            cout<<" ";
        }
        cout<<dp[11][goal]<<endl;
    }

    return 0;
}
