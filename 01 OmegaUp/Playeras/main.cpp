#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e6 + 2;
using ll = long long int;

vector<pair<int,int>>in;
vector<pair<int,int>>merged;
int n,h;
bool visited[maxN];
bool isInterval(int a, int b, int c, int d)
{
    int maxx = max(a,c);
    int minn = min(b,d);
    return maxx <= minn;
}

void fillA(int i, int j)
{
    for (;i<=j;i++)
    {
        visited[i] = true;
    }
}

void mergeIntervals()
{
    sort(in.begin(),in.end());
    stack<pair<int,int>>intervals;
    intervals.push(in[0]);
    for (int i=1;i<in.size();i++)
    {
        pair<int,int>now = intervals.top();

        if (isInterval(now.first,now.second, in[i].first, in[i].second))
        {
            intervals.pop();
            pair<int,int>res = make_pair(now.first, max(now.second, in[i].second));
            intervals.push(res);
        }
        else
        {
            intervals.push(in[i]);
        }
    }

    int size = intervals.size();
    for (int i=0;i<size;i++)
    {
        pair<int,int>front;
        front = intervals.top();
        if (!intervals.empty())intervals.pop();
        merged.push_back(front);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>h;
    int a;
    cin>>a;
    for (int i=0;i<a;i++)
    {
        int x; cin>>x;
        int ht; cin>>ht;
        int inicio = max(0, x - ht);
        int final = min(n, x + ht);
        in.push_back(make_pair(inicio-1,final-1));
    }

    mergeIntervals();
    for (int i=0;i<merged.size();i++)
    {
        fillA(merged[i].first, merged[i].second);
    }


    int ans = 0;
    for (int i=0;i<n;i++)
    {
        if (!visited[i]) // No esta visitado
        {
            ans++;
            i += (2 * h) ;
        }
    }
    cout<<ans;

    return 0;
}