#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n,dato,valor;
    cin>>n;

    stack<int> pila;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        if (dato==1)
        {
            cin>>valor;
            pila.push(valor);
        }
        else if (dato==2)
        {
            if (!pila.empty())
            {
                pila.pop();
            }
        }
        else
        {
            if (pila.empty())
            {
                cout<<"Empty!"<<endl;
            }
            else
            {
                cout<<pila.top()<<endl;
            }
        }
    }

    return 0;
}