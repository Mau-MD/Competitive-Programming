#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const int maxN = 1502;
typedef vector<pair<int,pair<int,int>>> vp;
typedef pair<int,pair<int,int>> pii;


bool compare(pii a, pii b) // A se debe de poner antes que B?
{
    if (a.second.first == b.second.first) // Ambos tiempos de salida son iguales
    {
        if (a.first < b.first)return true;
        return false;
    }
    if (a.second.first < b.second.first)return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vp vals;
    for (int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vals.push_back({i,{b,a}}); // Final Inicio
    }

    sort(vals.begin(),vals.end(), compare);
    vector<int>ans;

    pii last = vals[0];
    ans.push_back(1);

    for (int i=1;i<n;i++)
    {
        if (vals[i].second.second <= last.second.first)continue;
        ans.push_back(vals[i].first+1);
        last = vals[i];
    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for (auto x:ans)cout<<x<<" ";
    return 0;

}