#include <bits/stdc++>
using namespace std;

int main () {
    int n,*arr;
    cin>>n;
    arr=new int[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }

    delete[] arr;


    return 0;
}