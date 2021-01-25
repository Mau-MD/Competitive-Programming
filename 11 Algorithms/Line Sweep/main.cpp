#include <bits/stdc++.h>
using namespace std;
const int maxN = 60000;
int main()
{
    int n;
    cin>>n;

    int sweep[maxN];
    memset(sweep,0,sizeof(sweep));

    for (int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        sweep[x] += 1;
        sweep[y] -= 1;
    }
    int ans = 0;
    vector<pair<int,int>>indices;
    int line =0 ;
    for (int i=0;i<maxN;i++)
    {
        line += sweep[i];
        if (line > ans)
        {
            ans = line;
        }
    }
    line = 0;
    int anterior =0;
    pair<int,int>aux;
    bool flag = false;
    for (int i=0;i<maxN;i++)
    {
        line += sweep[i];
        if ((line == ans && line != anterior) || (anterior == ans && line != anterior))
        {
            if (!flag)
            {
                aux.first = i;
                flag = true;
            }
            else
            {
                aux.second = i;
                flag = false;
                indices.push_back(aux);
            }
        }
        anterior = line;
    }

    cout<<ans<<endl;
    for (auto x: indices)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}
