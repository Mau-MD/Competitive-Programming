#include <bits/stdc++.h>
#define NDEF -160000000
#define MAX 160000002

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        long int n, r = NDEF;
        cin>>n;
        long int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long int g=a[0],c=MAX;
        for (int i=1;i<n;i++)
        {
             if (a[i] > g)
             {
                 if (c==MAX)
                 {
                     r = max(r, g - a[i]);
                     g = a[i];
                 }
                 else
                 {
                     c = min(c,a[i]);
                     r = max(r, g - c);
                     g = a[i];
                     c = MAX;
                 }
             }
             else
             {
                 c = min(c,a[i]);
             }
         //  cout<<g<<" "<<c<<endl;

        }
        r = max(r, g-c);
        cout<<r<<endl;
    }
    return 0;
}
