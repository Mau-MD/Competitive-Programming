#include <iostream>
using namespace std;

int main()
{
    int n_vertices, n_aristas;
    cin >> n_vertices >> n_aristas;

    int vertice1, vertice2;
    bool aislados[n_vertices];

    memset(aislados, true, n_vertices);
    for (int i = 0 ; i < n_aristas; i++)
    {
        cin>>vertice1>>vertice2;
        aislados[vertice1] = false;
        aislados[vertice2] = false;
    }

    for (int i=0;i<=n_aristas;i++)
    {
        if (aislados[i])
        {
            cout<<i<<" ";
        }
    }


    return 0;
}
