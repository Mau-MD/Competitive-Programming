#include <iostream>
using namespace std;

int multiplicacionRecursiva(int, int);

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiplicacionRecursiva(a,b);
    return 0;
}

int multiplicacionRecursiva(int a, int b)
{
    if (b==1)
    {
        return a;
    }
    else
    {
        return a + multiplicacionRecursiva(a,b-1);
    }
}