#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000000;

int n;
int a[maxN];

bool can(int k)
{
    vector<int>torres;

    for (int i=0;i<k;i++)
    {
        torres.push_back(a[i]);
    }

    int ind = k;
    while (ind < n)
    {
        for (int i=0;i<k;i++) // Itero por las tres cajas
        {
            torres[i] = min(torres[i]-1, a[ind++]);

            if (torres[i] < 0)return false;
            if (ind >= n)break;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    int low = 0, high = maxN, mid;
    while (high - low > 1)
    {
        mid = (low + high) / 2;
        if (can(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout<<high;

    return 0;
}
