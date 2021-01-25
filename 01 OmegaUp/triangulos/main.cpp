#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        double dato;
        cin>>dato;
        double res = sqrt(pow(dato,2) - pow(dato/2,2));
        cout<<fixed<<setprecision(2)<<res<<endl;
    }
    return 0;
}
