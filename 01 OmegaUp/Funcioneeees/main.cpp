#include <iostream>
using namespace std;

void lecturaArr();
void impares(int arr[],int n);

int arr[10000],n;

int main () {
    lecturaArr();
    impares(arr, n);


    return 0;
}

void lecturaArr() {
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
}

void impares(int arr[],int n) {
    for (int i=0;i<n;i++) {
        if (arr[i]%2 != 0) {
            cout<<arr[i]<<" ";
        }
    }
}