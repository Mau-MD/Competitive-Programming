#include <iostream>
#include <string>
using namespace std;

int conteoPalabras(string a)
{
    int cuenta=1;

    for (int i=0;i<a.size();i++)
    {
        if (a[i]==' ' && isalpha(a[i+1]))
        {
            cuenta++;
        }
    }
    return cuenta;
}

int main()
{
    string a;
    getline(cin,a);
    cout<<conteoPalabras(a);

    return 0;
}