#include <bits/stdc++.h>
using namespace std;
int main () {
    list <int> tacos;
    int n,s,t,v=0,a,c;
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>s;
        if (s==1) {
            cin>>t;
            tacos.push_back(t);
        }
        else if (s==2) {
            a=tacos.front();
            v+=a;
            if (tacos.empty()!=1) {
            tacos.pop_front();
                }
        }
        else if (s==3) {
            if (tacos.empty()!=1) {
                c = tacos.size();
                cout<<c<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
        }
        else if (s==4) {
            cout<<v<<endl;
        }
        cin.ignore();
    }


    return 0;
}