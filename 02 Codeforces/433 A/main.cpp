#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += (a[i] / 100);
    }
    if (n == 1)
    {
        cout<<"NO";
        return 0;
    }
    if (sum % 2 != 0)cout<<"NO";
    else
    {
        int obj = (sum * 100) / 2;
        sort(a, a + n);
        int step = 0;
        bool ok = false;
        for (int i=0, j = 0;i<n;i++)
        {
            step += a[i];
            while (step > obj)
            {
                step -= a[j];
                j++;
            }
            if (step == obj)
            {
                ok = true;
                break;
            }
        }
        if (ok)cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
