/* Separar la baraja en dos montones casi iguales.
    Repetir
        Bajar una carta del monton 1;
        Bajar una carta del monton 2;
    Hasta acabar con los montones

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> baraja, mazo1, mazo2;
    int n, dato;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if(i+1<=n/2)
        {
            mazo1.push_back(dato);
        }
        else
        {
            mazo2.push_back(dato);
        }
    }

    if (n%2 == 0)
    {
        for (int i=0;i<n/2;i++)
        {
            baraja.push_back(mazo1[i]);
            baraja.push_back(mazo2[i]);
        }
    }
    else
    {
        for (int i=0;i<n/2;i++)
        {
            baraja.push_back(mazo1[i]);
            baraja.push_back(mazo2[i]);
        }
        baraja.push_back(mazo2[mazo2.size()-1]);
    }


    for (auto x:baraja)
    {
        cout<<x<<" ";
    }

    /*
    cout<<endl;
    for (auto x:mazo1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for (auto x:mazo2)
    {
        cout<<x<<" ";
    }

     */

    return 0;
}