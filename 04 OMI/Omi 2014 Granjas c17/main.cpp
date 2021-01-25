#include <bits/stdc++.h>
using ll = unsigned long long int;
using namespace std;
const int maxN = 50002;
// ios base sync with stdio boo
// vamos a ver que tan rapido puedo escribir un for
/*
 * for (int i=0;i<n;i++)
 * {
 *  chale no lo puedo escribir tan rapido como pense que lo podia hacer
 *  pero puedo internat escribi rrapiod la neta no lo hafo
 * }
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // i conecta a x
    // buscar ciclos
    bool v[maxN];
    memset(v,false, sizeof(v));
    vector<ll> ciclos;

    for (int i=0;i<n;i++)
    {
        if (v[i])continue;
        int length = 0;
        int aux = i;
        while (true)
        {
            if(v[aux])break;
            v[aux] = true;
            length++;
            aux = a[aux] - 1;
        }
        ciclos.push_back(length);
    }

    ll ans =0;
    if (ciclos.size() == 1)
    {
        cout<<ciclos[0];
        return 0;
    }
    ans = ciclos[0];
    for (int i=1;i<ciclos.size();i++)
    {
        ans = lcm(ciclos[i],ans);
    }
    cout<<ans;

    return 0;
}
//