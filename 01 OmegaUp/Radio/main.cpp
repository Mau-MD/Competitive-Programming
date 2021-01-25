#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n < 540 || n > 1520)cout<<"error";
    else
    {
        if (n < 780 && n > 580)
        {
            cout<<"atras "<< n - 580;
            return 0;
        }
        else if (n < 580)
        {
            cout<<"adelante "<< 580 - n;
            return 0;
        }

        if (n >= 780 && n < 980)
        {
            cout<<"adelante "<< 980 - n;
            return 0;
        }
        else if (n > 980 && n < (980 + 1190)/2)
        {
            cout << "atras " << n - 980;
            return 0;
        }

        if (n >= (980 +1190)/2 && n < 1190)
        {
            cout<<"adelante "<<1190 - n;
            return 0;
        }
        else if (n > 1190 && n < (1190 + 1250)/2)
        {
            cout<<"atras "<<n - 1190;
            return 0;
        }

        if (n >= (1190 + 1250)/2 && n < 1250)
        {
            cout<<"adelante "<<1250 - n;
            return 0;
        }
        else if (n > 1250 && n < (1250 + 1420)/2)
        {
            cout<<"atras "<<n - 1250;
            return 0;
        }

        if (n >= (1250 + 1420)/2 && n < 1420)
        {
            cout<<"adelante "<<1420 - n;
            return 0;
        }
        else
            cout<<"atras "<<n - 1420;
        return 0;
    }
    return 0;
}
