#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, menor = 9999999 , mayor = -1, promedio = 0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        mayor  = max(mayor, a[i]);
        menor = min(menor, a[i]);
        promedio += a[i];
    }

    cout<<menor<<" "<<mayor<<" "<<promedio / n;

    return 0;
}
