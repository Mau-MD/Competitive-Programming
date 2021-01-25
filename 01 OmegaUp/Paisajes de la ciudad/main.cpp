#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // valor numerico , posicion
    stack<pair<int,int>>s;
    int res[n];
    memset(res,0,n);

    s.push(make_pair(a[0],0));

        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                s.push(make_pair(a[i], i));
                continue;
            }

            while (!s.empty() && s.top().first < a[i])
            {
                int aux = i-s.top().second - 1;
                res[s.top().second] = aux;
                s.pop();
            }

            s.push(make_pair(a[i], i));
        }

        while (!s.empty())
        {
            res[s.top().second] = n - 1 - s.top().second;
            s.pop();
        }

        //
    int res1[n];
    memset(res1,0,n);

    s.push(make_pair(a[n-1],n-1));

    for (int i = n-2; ~i; i--)
    {
        if (s.empty())
        {
            s.push(make_pair(a[i], i));
            continue;
        }

        while (!s.empty() && s.top().first < a[i])
        {
            //cout<<s.top().second<<" "<<i<<endl;
            res1[s.top().second] = s.top().second - i - 1 ;
            s.pop();
        }

        s.push(make_pair(a[i], i));
    }

    while (!s.empty())
    {
        res1[s.top().second] = s.top().second ;
        s.pop();
    }

    for (int i=0;i<n;i++)
    {
        cout<<res1[i] + res[i] + 1<<" ";
    }

    return 0;
}
