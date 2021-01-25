#include <bits/stdc++.h>
using namespace std;

int depth;
string tree;
int i;
void val(bool left, int d)
{
    i++;
    char nextNode = tree[i];
    depth = max(depth, d);
    if (i >= tree.length())return;
    if (nextNode == 'l')return;
    val(true, d+1);
    if (i >= tree.length())return;
    val(false, d+1);

}

void solve()
{
    depth = 0;
    i = -1;
    cin>>tree;
    val(false,0);
    cout<<depth<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
