#include <bits/stdc++.h>
using namespace std;
#define forx(i,a,b) for (int i=a;i<b;i++)
#define PB push_back
typedef vector<int> VI;
int main ()
{
    int n,y;
    cin>>n;
    set<int> s;
    forx(i,0,n) {
        cin>>y;
        s.insert(y);
    }
    int x;
    cin>>x;

    auto it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
        if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }

    return 0;
}