#include <iostream>
#include <string>
using namespace std;
int main()
{
    string aux;
    cout<<endl;
    for (int i=0;i<10;i++)
    {
        string final = "";
        int left_bracket_count = 0;
        int right_bracket_count = 0;
        getline(cin,aux);
        for (int j=0;j<aux.size();j++)
        {
            if (aux[j] == '{')
            {
                left_bracket_count++;
                if (left_bracket_count > 1)final += "CRGB(";
                else
                {
                    final+= aux[j];
                }
            }
            else if (aux[j] == '}')
            {
                right_bracket_count++;
                if (right_bracket_count <= 6)final += ")";
                else
                {
                    final+= aux[j];
                }
            }
            else
            {
                final+= aux[j];
            }
        }
        cout<<final<<endl;
    }
    return 0;
}
