#include <bits/stdc++.h>
using namespace std;
const int maxN = 10002;
using ll = long long int;
ll sum[maxN],sum2[maxN];



ll srq1(int i, int j)
{
    if (i == 0)return sum[j];
    return sum[j] - sum[i-1];
}

ll srq2(int i, int j)
{
    if(i==0)return sum2[j];
    return sum2[j] - sum2[i-1];
}

void solve(int n)
{
    int a[maxN],b[maxN];
    int m;
    bitset<2 * maxN>b1,b2,inter;

    cin >> a[0];
    b1[a[0] + maxN] = true;
    sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        int index = a[i] + maxN;
        b1[index] = true;
        sum[i] = a[i] + sum[i - 1];
    }
    cin >> m;
    cin >> b[0];
    b2[b[0] + maxN] = true;
    sum2[0] = b[0];
    for (int i = 1; i < m; i++)
    {
        cin >> b[i];
        int index = b[i] + maxN;
        b2[index] = true;
        sum2[i] = b[i] + sum2[i - 1];
    }

    inter = b1 & b2;
    int inicio = min(a[0],b[0]) + maxN;
    int final = max(a[n-1],b[m-1]) + maxN;
    vector<int> listaInter;
    for (int i = inicio; i <= final; i++)
    {
        if (inter[i])
        {
            cout<<"hola";
            listaInter.push_back(i-maxN);
        }
    }

    int k = 0;
    int i = 0, j = 0;
    ll ans = 0;

    while (i < n-1)
    {
        int pos1, pos2;
        if (k == listaInter.size())
        {
            pos1 = n-1;
            pos2 = m-1;
        }
        else
        {
            pos1 = lower_bound(a, a + n, listaInter[k]) - a;
            pos2 = lower_bound(b, b + m, listaInter[k++]) - b;
        }
        ll opcion1 = srq1(i, pos1);
        ll opcion2 = srq2(j, pos2);

        if (i > 0)opcion1-=a[i],opcion2-=b[j];

        ans += max(opcion1, opcion2);
        i = pos1;
        j = pos2;
    }

    cout<< ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        int n;
        cin >> n;
        if (n==0)return 0;
        solve(n);
    }
}
