    #include <bits/stdc++.h>
    #define ll unsigned long long int
    using namespace std;
    const int MOD = 10000;

    bool isInterval(int a, int b, int c, int d)
    {
        int minn = min(b,d);
        int maxx = max(a,c);
        return maxx <= minn;
    }

    ll sum(ll n)
    {
        return n * (n + 1)/ 2;
    }

    int main()
    {
        int n, u, q;
        cin>>n>>u>>q;

        vector<pair<int,int>>updates;

        for (int i=0;i<u;i++)
        {
            int x,y;
            cin>>x>>y;
            updates.push_back(make_pair(x,y));
        }

        for (int i=0;i<q;i++)
        {
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            int x,y;
            cin>>x>>y; // inicio final del rango
            ll ans = 0;
            for (auto k : updates)
            {
                if (isInterval(x,y,k.first,k.second))
                {
                    if (x <= k.first && y >= k.second)
                    {
                        ans += sum(k.second - k.first + 1) % MOD;
                    }
                    else if ( x <= k.first && y < k.second)
                    {
                        ans += sum(y - k.first + 1) % MOD;
                    }
                    else if ( x > k.first && y >= k.second)
                    {
                        int rS = (x - k.first) + 1;
                        int rE = (k.second - k.first) + 1;
                        ans += (sum(rE) - sum(rS - 1)) % MOD;
                    }
                    else
                    {
                        int rS = (x - k.first) + 1;
                        int rE = (y - k.first) + 1;

                        ans += (sum(rE) - sum(rS - 1)) % MOD;
                    }
                }
            }
            cout<<ans % MOD<<endl;
        }
        return 0;
    }