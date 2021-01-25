#include <bits/stdc++.h>
using namespace std;
/*
void bw(char);

void funcion(char a) {
    if (a>'a') {
        bw(a);
    }
    cout<<a<<" ";


}

void bw(char a) {
    funcion(--a);
}

*/
/*

void time1() {
    clock_t begin = clock();
    int pasos=0;
    for (int i=1;i<=10;i++) {
    pasos++;
    }

    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    cout<<elapsed_secs<<endl;
    cout<<pasos<<endl;

}
void time2() {
    clock_t begin = clock();
    int pasos=0;
    for (int i=1;i<1024;i=i*2) {
        pasos++;
    }

    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    cout<<elapsed_secs<<endl;
    cout<<pasos<<endl;

}
 */
int main () { /*
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
    */

    /*
    vector <int> b(6);

    iota(b.begin(),b.begin()+6,20);

    for (int i=0;i<b.size();i++) {
        cout<<b[i]<<" ";
    }

    return 0;

     */

    /*
    int n,d;
    vector <int> x;
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>d;
        x.push_back(d);
    }

    partition(x.begin(),x.end(),[](int x) {
        return x%2==0;
    });

    for (int i=0;i<n;i++) {
        cout<<x[i]<<" ";
    }
    */
    /*

    priority_queue<int> a;
    int d,n;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin >> d;
        a.push(d);
    }

    for (int i=0;i<n;i++) {
        cout<<a.top();
        a.pop();
    }
     */

    char a[1000],aux[1];
    int suma=0;
    cin>>a;
    for (int i=0;i<strlen(a);i++) { // O(a.size()) == O(n); 3 digitos 1000
        aux[0] = a[i];
        suma += atoi(aux);
    }
    cout<<suma;


}