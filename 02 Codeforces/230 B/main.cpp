#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int maxN = 1e6;

bool c[maxN];

void criba()
{
    for (int i=2;i<=1e6;i++)
    {
        if (!c[i])
        {
            for (int j = 2; i * j <= 1e6; j++)
            {
                c[i * j] = true;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    criba();
    for (int i=0;i<n;i++)
    {
        ll d;
        cin>>d;
        if (d == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int aux = sqrt(d);
        double aux2 = sqrt(d);
        if (aux2 - aux != 0)cout<<"NO"<<endl;
        else if (!c[aux])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
