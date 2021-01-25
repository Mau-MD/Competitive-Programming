#include <iostream>
#include <vector>
#include <map>
#define MAX 10

using namespace std;

int n = 8;
int a[MAX];
vector<int>taken;
bool found = false;

bool possible(int curr)
{
    for (int i=0;i<n;i++)
    {
        if (curr != i && (a[i] == a[curr] || abs(i - curr) == abs(a[i] - a[curr])))return false;
    }
    return true;
}

bool take(int row)
{
    for (int i=0;i<taken.size();i++)
    {
        if (row == taken[i])return false;
    }
    return true;
}

void solve(int row)
{
    if (!take(row))solve(row+1);
    else if (row == n && !found)
    {
        for (int i=0;i<n;i++)
        {
            if (!possible(i))return;
        }
        for (int i=0;i<n;i++)
        {
            cout<<a[i]+1<<" "<<i+1<<endl;

        }
        found = true;
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            a[row] = i;
            if (possible(row))
            {
                solve(row+1);
            }
            a[row] = -888;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<int,int>repeated;
    int x, i, j;
    cin>>x;
    for (int t=0;t<8;t++)
    {
        a[t] = -888 + t;
    }
    for (int c=0;c<x;c++)
    {
        cin>>i>>j;
        a[j-1] = i-1;
        repeated[j-1]++;
        if (repeated[j-1]>1)
        {
            cout<<"0";
            return 0;
        }
        taken.push_back(j-1);
    }
    solve(0);
    if (!found)
    {
        cout<<"0"<<endl;
    }
    return 0;
}
