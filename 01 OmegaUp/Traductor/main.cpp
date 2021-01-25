#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n,w, numirica, enteral;
    cin>>n>>w;
    map<int,int>palabras;
    for (int i=0;i<n;i++)
    {
        cin>>numirica>>enteral;
        palabras[numirica] = enteral;
    }
    int dato;
    for (int i=0;i<w;i++)
    {
        cin>>dato;
        if (palabras[dato] == 0)cout<<"C?"<<endl;
        else cout<<palabras[dato]<<endl;
    }
    return 0;
}
