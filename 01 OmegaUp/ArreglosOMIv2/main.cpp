#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void imprimir(vector<int> b)
{
    for(auto x:b)
    {
        cout<<x<<" ";
    }
}
void barajar(vector<int> a, int n)
{
    vector<int> b;
    int aux=n;
    for (int i=0;i<n;i++)
    {
        int j = rand() % aux;
        aux--;
        b.push_back(a[j]);

        for (int x=j;x<n;x++)
        {
            a[x]=a[x+1];
        }
        a.pop_back();
    }
    imprimir(b);
}
int main ()
{
    srand(time(NULL));
    int n,dato;
    cin>>n;
    vector <int> a;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        a.push_back(dato);
    }

    barajar(a,n);






    return 0;
}