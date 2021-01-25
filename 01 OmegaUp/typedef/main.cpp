#include <bits/stdc++.h>
using namespace std;
#define forx(i,a,n) for (int i=a;i<n;i++)
typedef vector<int> VEC;
int main () {
   int n;
   cin>>n;
   VEC a(10);
   forx(i,0,n) {
       cin>>a[i];
   }
   forx(i,0,n) {
       cout<<a[i]<<" ";
   }

    return 0;
}