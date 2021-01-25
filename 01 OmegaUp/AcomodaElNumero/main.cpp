#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a;
    vector<int>::iterator it1;
    int n,dato;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        a.push_back(dato);
    }
    int aux = a[0];
    sort(a.begin(),a.end());
    it1 = lower_bound(a.begin(),a.end(),aux);
    cout<<(it1 - a.begin());


    return 0;
}