#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int mxN;
const int MAX = 1e5+2;
vector<pair<ll,ll>>top;
ll memo[MAX][2];

// suponiendo que se inicia con los dos

ll solve(int n, bool par) // 0 - impar 1 - par 2 - cualquiera
{
   // Si hay dos, siempre agarramos
   if (memo[n][par] != -1)return memo[n][par];
   if (n >= mxN)return 0;
   if (top[n].first == -1 && top[n].second == -1) return memo[n][par] = solve(n+1,par);
   if ((n+1)%5 == 0)
   {
       ll plusAns = 0;
       if (par == 1 && top[n].second != -1) // el anterior fue par
       {
           plusAns = top[n].second * 5; // impar
           if (top[n].first != -1) // si hay par
           {
               return memo[n][par] = solve(n+1,1) + plusAns + top[n].first;
           }
           return  memo[n][par] = max(solve(n+1,0) + plusAns, solve(n+1,1));
       }
       else
       {
           plusAns = top[n].first * 5; // par
           if (top[n].second != -1)
           {
               return memo[n][par] = solve(n+1,0) + plusAns + top[n].second;
           }
           return memo[n][par] = max(solve(n+1,1) + plusAns, solve(n+1,0));
       }
   }
   if (top[n].first != -1 && top[n].second != -1)return memo[n][par] = solve(n+1,par) +  top[n].first + top[n].second;
   if (top[n].first == -1) // Si solo hay impar
   {
       ll v1, v2 = -1;
       v1 = solve(n+1,par);
       if (par == 1)v2 = solve(n+1,0) + top[n].second;
       return memo[n][par] = max(v1,v2);
   }
   else
   {
       ll v1,v2 = -1;
       v1 = solve(n+1,par);
       if (par == 0)v2 = solve(n+1,1) + top[n].first;
       return memo[n][par] = max(v1,v2);
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>mxN;
    memset(memo,-1,sizeof(memo));
    for (int i=0;i<mxN;i++)
    {
        int k;
        cin>>k;
        if (k == 0)
        {
            top.push_back(make_pair(-1,-1));
            continue;
        }
        priority_queue<ll>mayorPar, mayorImpar;
        int d;
        for (int j=0;j<k;j++)
        {
            cin>>d;
            if (d&1) // impar
            {
                mayorImpar.push(d);
            }
            else
            {
                mayorPar.push(d);
            }
        }
        // mayor por esta k
        if (!mayorPar.empty() && !mayorImpar.empty())top.push_back(make_pair(mayorPar.top(), mayorImpar.top()));
        else if (mayorPar.empty())top.push_back(make_pair(-1,mayorImpar.top()));
        else top.push_back(make_pair(mayorPar.top(), -1));
    }

    if (top[0].first == -1 && top[0].second == -1)
    {
        int l = 1;
        while (top[l].first == -1 && top[l].second == -1)
        {
            l++;
        }
        if (top[l].first == -1) // Solo tengo un impar
        {
            cout<<solve(l,1);
        }
        else if (top[l].second == -1)
        {
            cout<<solve(l,0);
        }
        else
        {
            cout << max(solve(l, 1), solve(l, 0));
        }
    }
    else if (top[0].first == -1) // Solo tengo un impar
    {
        cout<<solve(0,1);
    }
    else if (top[0].second == -1)
    {
        cout<<solve(0,0);
    }
    else
    {
        cout << max(solve(0, 1), solve(0, 0));
    }
    return 0;
}
