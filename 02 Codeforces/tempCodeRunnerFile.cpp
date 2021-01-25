#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        vector<int>ans;
        if (n == 2)
        {
            cout<<a<<" "<<b<<endl;
            continue;
        }
        ll dif = b - a;
        for (int i=1;i<=dif;i++)
        {
            if (dif % i == 0)
            {
                ll caben = (dif / i) ;
                ll restantes;
                bool flag = true;
                //cout<<"caben "<<caben<<endl;)
                if (caben < n)
                {
                    if (caben + 1 == n) // solo caben en medio contando el ultimo elemento
                    {
                        for (int j=a;j<=b;j+=i)
                        {
                            ans.push_back(j);
                        }
                        flag = false;
                        restantes = 0;
                    }
                    else // cuantos caben atras
                    {
                        restantes = n - caben; // en este caso 6
                        //cout<<"restantes "<<restantes<<endl;
                        ll cabenAtras =  a / i;
                      //  cout<<cabenAtras<<endl;
                        if (restantes < cabenAtras)
                        {
                            ll aux = a;
                            if (i == dif)restantes--;
                            for (int j=0;j<restantes;j++)
                            {
                               aux = aux - i;
                               ans.push_back(aux);
                            }
                            restantes = 0;
                        }
                        else
                        {
                            ll start = a % i;
                            if (start == 0)
                            {
                                start += i;
                                cabenAtras--;
                            }
                            for (int j=0;j<cabenAtras;j++)
                            {
                                ans.push_back(start);
                                start+=i;
                            }
                            restantes -= cabenAtras;
                          //  cout<<restantes<<" ";
                        }
                    }

                    if (flag)
                    {
                        for (int j=a;j<=b;j+=i)
                        {
                            ans.push_back(j);
                        }
                    }
                    if (restantes > 0)
                    {
                        ll f = b + i;
                        for (int j=0;j<restantes-1;j++)
                        {
                            ans.push_back(f);
                            f = f + i;
                        }
                    }
                    break;

                }
            
            }
        }
        for (auto x: ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}