#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;string a,b;
    cin>>n>>m>>a>>b;
    map <int,int>mp,max;

    for (int i=0;i<n;i++) {
        max[a[i]]++;
    }
    int res=0;
    for (int i=0;i<m;i++) {
        mp[b[i]]++;
        if (i>=n) {
            mp[b[i-n]]--;
            if (mp[b[i-n]]==0) {
                mp.erase(b[i-n]);
            }
        }
        if (mp==max) {
            res++;
        }
    }

    cout<<res;

    return 0;
}