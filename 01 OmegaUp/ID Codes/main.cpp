#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string texto;
    while (true)
    {
     cin>>texto;
     if (texto == "#")break;
     string no_successor = texto; // Esta variable nos permitira saber si es el ultimo en la secuencia
     next_permutation(texto.begin(),texto.end());
     sort(no_successor.begin(), no_successor.end()); // Ordenamos la variables
     if (texto == no_successor) // Si es igual entonces no hay sucesor
     {
         cout<<"No Successor"<<endl;
     }
     else
     {
         cout<<texto<<endl;

     }
    }
    return 0;

}
