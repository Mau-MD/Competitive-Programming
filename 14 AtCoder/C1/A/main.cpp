#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int s = 0;
    for (int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (a == b)s++;
        if (s == 3)
        {
            cout<<"Yes";
            return 0;
        }
        if (a != b)s = 0;
    }
    cout<<"No";
    return 0;

}
