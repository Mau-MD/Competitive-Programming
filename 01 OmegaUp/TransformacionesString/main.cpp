#include <iostream>
#define MAX 1000002
using namespace std;

int n;
string tree[4*MAX+2];
string a;
void generateTree(int low, int high, int pos)
{
    if (low == high)
    {
        tree[pos] = a[low];
        return;
    }

    int mid = (high + low)/2;
    generateTree(low,mid,2*pos+1);
    generateTree(mid+1,high,2*pos+2);
    tree[pos] = a[low];
}


int main()
{
    a = "yomevoyalaioi";
    generateTree(0,13,0);
    for (int i=0;i<13;i++)
    {
        cout<<tree[i]<<" ";
    }
    return 0;
}
