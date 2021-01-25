#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void imprimir(vector<int> a)
{
    for (auto x:a)
    {
        cout<<x<<" ";
    }
}

void baraja(vector<int>a,int n)
{
    for (int i=0;i<n;i++)
    {
        int j = rand() % n;
        swap(a[i],a[j]);
    }
    imprimir(a);
}
int main()
{
    srand(time(NULL));
    int n,dato;
    cin>>n;
    vector<int> a;

    for (int i=0;i<n;i++)
    {
        cin>>dato;
        a.push_back(dato);
    }

    baraja(a,n);

    return 0;
}