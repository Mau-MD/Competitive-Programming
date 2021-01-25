#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<b;i++)
int main() {
    unordered_set <int> s;
    int n,m,cuenta=0;
    cin>>n>>m;
    int a,b[m];

    FOR(i,0,n) {
            cin>>a;
            s.insert(a);
    }


    FOR(i,0,m) {
        cin>>b[i];
        if(s.count(b[i])) {
            cuenta++;
        }
    }


    cout<<cuenta;   


    return 0;
}