#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

vector<ll>nexT;

void precalcular()
{
    for (int size=1;size < 11;size++)
    {
        for (int i=0;i<(1 << size);i++)
        {
            string res;
            for (int j=0;j<size;j++)
            {
                if (i & (1 << j))
                {
                    res += '7';
                }
                else
                {
                    res += '4';
                }
            }
            reverse(res.begin(),res.end());
            nexT.push_back(stoll(res));
        }
    }
}
int main()
{
    ll l,r,res = 0;
    cin>>l>>r;

    precalcular();
    sort(nexT.begin(),nexT.end());

    //cout<<"size: "<<nexT.size()<<endl;
    while(l<=r)
    {
        ll index = lower_bound(nexT.begin(),nexT.end(),l) - nexT.begin();
        ll sig = nexT[index];
        res += sig * min(sig - l + 1, r - l + 1);
        l = sig + 1;
    }

    cout<<res;


    return 0;
}
