#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    int n,d;
    cin>>n;
    vector<int> a;

    for (int i=0;i<n;i++) {
        cin>>d;
        a.push_back(d);
    }

    if(all_of(a.begin(),a.end(),[](int x){return x%2==0;})) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }


    return 0;
}