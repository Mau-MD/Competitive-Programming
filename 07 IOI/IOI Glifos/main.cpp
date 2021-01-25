#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;string a,b;
    cin>>n>>m>>a>>b;
    map<int,int>min,max;

    for (int i=0;i<n;i++) {
        max[a[i]]++;
    }
    int res=0;
    for (int i=0;i<m;i++) {
        min[b[i]]++;
        if (i>=n) {
            min[b[i-n]]--;
            if (min[b[i-n]]==0) {
                min.erase(b[\i-n]);
            }
        }
        if (min==max) {
            res++;

        }

    }

    cout<<res;


    return 0;
}
