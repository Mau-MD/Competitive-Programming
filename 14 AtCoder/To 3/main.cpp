#include <bits/stdc++.h>
using namespace std;
using ll =  long long int;

ll n;
int maxx = INT_MAX;

void solve(string num, int mov)
{
    if (num != "" && stol(num) % 3LL == 0LL)
    {
        if (mov < maxx)
        {
            maxx = mov;
        }
        return;
    }
    for (int i = 0; i < num.length(); i++)
    {
        string numIzq = num.substr(0,i);
        string numDer = num.substr(i+1,num.length() - i+1);
     //   cout<<i<<" "<<numIzq<<" "<<numDer<<endl;
        solve(numIzq + numDer, mov + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    solve(to_string(n), 0);
    if (maxx == INT_MAX)cout<<-1;
    else cout<<maxx;
    return 0;
}
