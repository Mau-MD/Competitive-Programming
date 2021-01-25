#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,op;
    cin>>n>>op;
    string palabra, sol;
    cin>>palabra;

    int operacion, rangoin, rangofin, rep, aux=0;

    for (int i=0;i<op;i++)
    {
        cin>>operacion;
        if (operacion == 1)
        {
            cin>>rangoin>>rangofin>>rep;
                if (rangoin==1)
                {
                    palabra[0]+=rep + aux;
                    aux+=rep;
                    if (palabra[0]>='{')
                    {
                        int auxp = palabra[0]-'{';
                        palabra[0]='a' + auxp;
                        cout<<palabra[0];
                    }
                }

        }
        else
        {
            sol.push_back(palabra[0]);
            palabra.erase(0,1);
            palabra.push_back('a');
            palabra[0];
            cout<<palabra[0]+3<<endl;
            palabra[0]+=aux;
            if (palabra[0]>'{')
            {
                palabra[0]='a' + (palabra[0]-'{');
            }
        }
    }

cout<<sol;

    return 0;
}