#include <bits/stdc++.h>
using namespace std;

set<int>res;
char num[4][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}, {'x','0','x'}};

// Solo puedes abajo y derecha
void dfs(int i, int j, string r)
{
    if ((!r.empty() && stoi(r) > 900 && (num[i][j] !='x')) || (i > 3 || j > 2))return;
    else
    {
        if(stoi(r)<902)res.insert(stoi(r));
        dfs(i,j+1,r);
        dfs(i+1,j,r);
        if (num[i][j]!= 'x') dfs(i,j+1,r+num[i][j]);
        if (num[i][j]!= 'x') dfs(i+1,j,r+num[i][j]);
        if (num[i][j]!= 'x') dfs(i,j,r+num[i][j]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    dfs(0,0,"1");
    dfs(0,1,"2");
    dfs(0,2,"3");
    dfs(1,0,"4");
    dfs(1,1,"5");
    dfs(1,2,"6");
    dfs(2,0,"7");
    dfs(2,1,"8");
    dfs(2,2,"9");
    while (t--)
    {
        int n;
        cin>>n;
        if (n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        else if (n==900)
        {
            cout<<"899"<<endl;
            continue;
        }
        set<int>::iterator it, pt;
        it = res.lower_bound(n);
        int der = *it;
        pt = prev(it);
        int izq = *pt;

        //cout<<der<<" "<<izq<<endl;
        if (der == n)cout<<der<<endl;
        else if (izq == n)cout<<izq<<endl;
        else if (der - n < n - izq)cout<<der<<endl;
        else cout<<izq<<endl;
    }


    return 0;
}
