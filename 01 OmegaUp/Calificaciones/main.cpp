#include <iostream>
using namespace std;
int main()
{
    int calificacion;
    while (cin>>calificacion)
    {
        if (calificacion >= 0 && calificacion <=3)
        {
            cout<<"0"<<endl;
        }
        else if (calificacion >= 4 && calificacion <= 8)
        {
            cout<<"7"<<endl;
        } else
        {
            cout<<"10"<<endl;
        }
    }
    return 0;
}
