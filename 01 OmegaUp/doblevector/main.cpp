#include <iostream>
using namespace std;
int main ( ){
    int vector1[100],vector2[100],n;
    cout<<"defina los elementos del vector"<<endl;
    cin>>n;

    for (int i =0;i<n;i++) {
        cin>>vector1[i];
        }
    for(int i =0;i<n;i++) {
        vector2[i]=vector1[i]*2;
    }
    for(int i =0;i<n;i++) {
        cout<<vector2[i]<<endl;
        }
        return 0;
}