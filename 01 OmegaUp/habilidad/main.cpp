#include <bits/stdc++.h>
using namespace std;

int main () {
    stack <int> s;
    int t,u,d;
    cin>>t;
    for (int i=0;i<t;i++) {
        cin>>u;
        if (u==1) {
            cin>>d;
            s.push(d);
        }
        else if (u==2) {
            if (s.empty()==1) {}
            else {s.pop();}
        }
        else if (u==3) {
            if (s.empty()==1) {
                cout<<"Empty!"<<endl;
            }
            cout<<s.top()<<endl;
        }
    }



    return 0;
}