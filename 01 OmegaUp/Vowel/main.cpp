#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin>>a;

    if ((a[0]=='a' || a[0]=='e' || a[0]=='i'|| a[0]=='o' || a[0]=='u' || a[0]=='A' ||a[0]=='E' ||a[0]=='I' ||a[0]=='O' ||a[0]=='U') && a.size()==1)
    {
      cout<<"Vowel";
    }
    else if ((a[0]<65 && a[0]>115) || a.size()>1)
    {
        cout<<"Error";
    }
    else
    {
        cout<<"Consonant";
    }
    return 0;
}
