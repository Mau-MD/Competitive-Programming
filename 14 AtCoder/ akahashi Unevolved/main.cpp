#include<iostream>
using namespace std;
using ll = long long int;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll x,y,a,b;
    cin>>x>>y>>a>>b;

    ll res  =0;

    while((double)a * x <= 2e18 && x * a <= x + b && x * a < y)
    {
        x*=a;
        res++;
    }
    //cout<<res<<" "<<x<<endl;
    res += (y-1-x) / b;
    cout<<res;
}