#include <iostream>
using namespace std;


int main()
{
    int n_vertices, n_aristas;
    cin>>n_vertices>>n_aristas;

    int vertice1, vertice2;
    int grafo[n_vertices][n_vertices];

    for (int i=0;i<n_vertices;i++)
    {
        for (int j=0;j<n_vertices;j++)
        {
            grafo[i][j] = 0;
        }
    }

    for (int i=0;i<n_aristas;i++)
    {
        cin>>vertice1>>vertice2;
        grafo[vertice1][vertice2] =true;
        grafo[vertice2][vertice1] = true;
    }

    int ciudades;
    cin>>ciudades;
    int rutas[ciudades];
    for (int i=0;i<ciudades;i++)
    {
        cin>>rutas[i];
        if (i>0)
        {
            if (grafo[rutas[i-1]][rutas[i]] == 0)
            {
                cout<<rutas[i-1]<<" "<<rutas[i]<<endl;
            }
        }
    }


    /*
    for (int i=0;i<n_vertices;i++)
    {
        for (int j=0;j<n_vertices;j++)
        {
            cout<<grafo[i][j];
        }
        cout<<endl;
    }
     */

    return 0;
}
