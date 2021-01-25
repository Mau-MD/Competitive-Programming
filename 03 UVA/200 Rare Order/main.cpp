#include <bits/stdc++.h>
using namespace std;
const int maxN = 102;

vector<string>c;
vector<int>adj[maxN];
vector<char>topo;
bool v[maxN];
bool e[maxN];

void pushDif(int start, int finish, int j)
{
    for (int i=start + 1;i<=finish;i++)
    {
        if (c[i][j] != c[i-1][j] && c[i-1][j] != '.')
        {
            adj[c[i-1][j]].push_back(c[i][j]);
            e[c[i-1][j]] = true;
            e[c[i][j]] = true;
        }
    }
}

int start, finish;

bool searchDup(int j, int inicio)
{
    int s = inicio;
    for (int i=inicio;i<c.size() - 1 ;i++)
    {
        if (c[i][j] != c[i+1][j] && c[i][j] != '.')
        {
            int len = i - s + 1;
            if (len > 1)
            {
                start = s;
                finish = i;
                return true;
            }
            else
            {
                s = i + 1;
            }
        }
    }
    return false;
}

void solve(int j, int s, int f)
{
    pushDif(s,f,j);
    while (searchDup(j,s))
    {
        solve(j+1,start,finish);
        s = finish;
    }
}

void dfs(int u)
{
    v[u] = true;
    for (int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i];
        if (!v[val])dfs(val);
    }
    topo.push_back(u);
}

int main()
{
    string a;
    cin>>a;
    while(a.size() < 21)a+='.';
    while (a != "#")
    {
        c.push_back(a);
        cin>>a;
        if (a == "#")break;
        while(a.size() < 21)a+='.';
    }

    solve(0,0,c.size());
    for (int i=0;i<24;i++)
    {
        if (!v['A' + i] && e['A' + i])
        {
            dfs('A' + i);
        }
    }
    reverse(topo.begin(),topo.end());
    for (auto x:topo)if (isalpha(x))cout<<x;
    /*
    vector<pair<int,int>>dupes;
    int j = 0;
    pushDif(1,c.size()-1,j);
    int ss = 0;
    while(searchDup(j,ss))
    {
        ss = finish;
        dupes.push_back({start,finish});
    }
    */

    return 0;
}
