#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a.size()<<endl;
    long long int suma = 0;
    for (long long int i=0;i<a.size();i++)
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
        {
            suma++;
        }
    }

    cout<<suma<<endl;
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}
