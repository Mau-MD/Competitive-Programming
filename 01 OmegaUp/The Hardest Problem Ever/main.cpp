#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    char plain[27];
    plain['A'] = 'V'; plain['B'] = 'W'; plain['C'] = 'X'; plain['D'] = 'Y'; plain['E'] = 'Z'; plain['F'] = 'A';
    plain['G'] = 'B'; plain['H'] = 'C'; plain['I'] = 'D'; plain['J'] = 'E'; plain['K'] = 'F'; plain['L'] = 'G';
    plain['M'] = 'H'; plain['N'] = 'I'; plain['O'] = 'J'; plain['P'] = 'K'; plain['Q'] = 'L'; plain['R'] = 'M';
    plain['S'] = 'N'; plain['T'] = 'O'; plain['U'] = 'P'; plain['V'] = 'Q'; plain['W'] = 'R'; plain['X'] = 'S';
    plain['Y'] = 'T'; plain['Z'] = 'U';


    while (true)
    {
        string text;
        getline(cin,text);
        if (text == "ENDOFINPUT")break;
        if (text == "START" || text == "END")continue;
        for (int i=0;i<text.size();i++)
        {
            if (isalpha(text[i]))
            {
                cout<<plain[text[i]];
            }
            else
            {
                cout<<text[i];
            }
        }
        cout<<'\n';
    }
    return 0;

}
