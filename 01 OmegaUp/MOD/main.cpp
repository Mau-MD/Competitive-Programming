#include <bits/stdc++.h>
using namespace std;
int main () {
    string  a;
    int t=3;
    while (t!=0) {
        getline(cin, a);
        if (a : '\n')break;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'a')a[i] = 'x';
            else if (a[i] == 'e')a[i] = 'w';
            else if (a[i] == 'i')a[i] = 'y';
            else if (a[i] == 'o')a[i] = 'k';
            else if (a[i] == 'u')a[i] = 'z';
        }
        cout<<a<<endl;
        t--;
    }

    return 0;
}