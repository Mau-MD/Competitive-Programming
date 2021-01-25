#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// 5 21 7
    int a,b,c, d;
    cin>>a>>b>>c>>d;
    cout<<b/c<<endl;
    cout<<a/c<<endl;
    cout<< (b/c) - (a/c)<<endl;


    if (a > b)
    {
        int cuenta_bits = 0;
        for (int i = 0; i < d; i ++)
        {
            if (a & (1<<i))
            {
                cuenta_bits++;
            }
        }

        cout<<pow(2,d-1) - cuenta_bits;
        return 0;
    }
    int mod = (b - a)%c;
    cout<<"mod "<<mod<<endl;
    if (mod != 0 )
    {
        cout<<"Imposible";
        return 0;
    }

    int suma = 0;
    for (int i = a; i!=b;i+=c)
    {
        suma++;
    }

    cout<<suma;
    /*
    int a, b, c,d, suma;

    while (true)
    {
        cin>>a>>b>>c>>d;
        suma = 0;
        if (a ==0 && b == 0 && c == 0 && d == 0)
        {
            cout<<"FOREVER"<<endl;
            break;
        }


    }

    */
    return 0;
}
