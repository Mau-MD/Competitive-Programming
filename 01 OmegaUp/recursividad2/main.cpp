#include <bits/stdc++>
using namespace std;

int escribeNumeros(int x,int y);

int main () {
    int n,g;
    cin>>n>>g;

    for (int i=n;i<=g;i++) {
        cout<<escribeNumeros(i,g);
    }




    return 0;
}

int escribeNumeros(int x,int y) {
    if (x==y) {
        return x;
    }
    else {
        return escribeNumeros(x,y-1);
    }




}