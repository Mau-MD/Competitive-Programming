#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    priority_queue<int>q;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        q.push(-d);
    }

    int ans = 0;
    for (int i=0;i<k;i++)
    {
        if (q.top() < 0)break;
        ans += q.top();
        q.pop();
    }
    cout<<ans;
    return 0;
}
