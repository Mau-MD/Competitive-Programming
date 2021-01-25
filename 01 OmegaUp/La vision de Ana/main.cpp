#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int caso;
    cin>>caso;
    for (int x=0;x<caso;x++)
    {
        int s,n, pos = -1;
        cin>>s>>n;
        double dato, mini = 999999;
        for (int i=0;i<n;i++)
        {
            cin>>dato;
            if (dato < mini)
            {
                mini = dato;
                pos = i + 1;
            }
        }
        cout<<"Case "<<x+1<<": comprar en dia "<<pos<<"\n";
    }
    return 0;
}
