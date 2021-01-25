#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<double,double> pii;

const int maxN = 1002;
int n;
vector<pii>c;

double dist(double x1, double y1, double x2, double y2)
{
    double res = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    res = sqrt(res);
    return res;
}

vector<int> adj[maxN];
bool v[maxN];
int cuenta;

void init()
{
    cuenta = 0;
    for (int i=0;i<maxN;i++)
    {
        adj[i].clear();
        v[i] = false;
    }
}

void dfs(int u)
{
    cuenta++;
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])
        {
            dfs(val);
        }
    }
}

bool can(double r)
{
    init();
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            double ans = dist(c[i].first, c[i].second, c[j].first, c[j].second);
            if (r >= ans / 2)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    dfs(0);
    if (cuenta == n)return true;
    else return false;
}

void solve()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        double a,b;
        cin>>a>>b;
        c.push_back({a,b});
    }

    double low = 0, high = 1e9+2, mid;
    while(high - low >= 1e-7)
    {
        mid = (low + high) / 2;
        if (can(mid))high = mid;
        else low = mid;
    }
    cout<<fixed<<setprecision(7)<<low;
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
