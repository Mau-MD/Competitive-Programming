#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if (c >= a && c<= b)
    {
        cout<<"INTERVALO";
    }
    else if (c<a)
    {
        cout<<"IZQUIERDA";
    }
    else
    {
        cout<<"DERECHA";
    }
    return 0;
}
