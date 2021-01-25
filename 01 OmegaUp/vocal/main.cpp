#include <iostream>
#include <string>
#include <cctype>
#include <locale>

using namespace std;
int main() {
    char a;
    cin>>a;

    a=tolower(a);
    if (!isalpha(a))
    {
        cout<<"Error";
    }
    else if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }


    return 0;
}