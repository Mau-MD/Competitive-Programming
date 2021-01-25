#include <bits/stdc++>
using namespace std;

int main () {
 int n,tiempo;
 cin>>n>>tiempo;
 int id,dato;

 list <int> time,ID;

 for (int i=0;i<n;i++) {
     cin>>id;
     ID.push_back(id);
     cin>>dato;
     time.push_back(dato);

 }
 int valor, ide;

 while (time.empty()!=1) {

     valor=time.front();
     ide=ID.front();

     valor-=tiempo;

     if (valor<=0) {
         cout<<ide<<endl;
     }
     else {
         time.push_back(valor);
         ID.push_back(ide);
     }

     time.pop_front();
     ID.pop_front();
 }


    return 0;
}