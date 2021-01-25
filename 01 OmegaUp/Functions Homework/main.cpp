#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int vowels(string word)
{
    int sum = 0;
    for (int i=0;i<word.size();i++)
    {
        if (word[i] == 'a' || word[i] == 'A')sum++;
        else if (word[i] == 'e' || word[i] == 'E')sum++;
        else if (word[i] == 'i' || word[i] == 'I')sum++;
        else if (word[i] == 'o' || word[i] == 'O')sum++;
        else if (word[i] == 'u' || word[i] == 'U')sum++;
    }
    return sum;
}

int count_words(string str)
{
    int sum = 1; // Contamos la primera palabra
    for (int i=0;i<str.size();i++)
    {
        if (str[i] == ' ')sum++;
    }
    return sum;
}

double distance(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void midpoint(double x1, double x2, double y1, double y2, double& xmid, double& ymid)
{
    xmid = (x1 + x2)/2;
    ymid = (y1 + y2)/2;
}

void slope(double x1, double x2, double y1, double y2, bool& vertical, double& s)
{
    vertical = false;
    if (x2 - x1 == 0)vertical = true;
    else s = (y2 - y1) / (x2 - x1);
}


string int_name(long long int numero)
{
    string name;
    if (numero >= 1e6) // Si es mayor o igual a un millon
    {
        int val = numero / 1e6;
        name = int_name(val) + " million ";
        numero = numero % 1000000;
    }
    if (numero >= 1000)
    {
        int val = numero / 1000;
        name = name + " " + int_name(val) + " thousand ";
        numero = numero % 1000;

    }
    if (numero >= 100)
    {
        int val = numero/100;
        name = name + " " + int_name(val) + " hundred ";
        numero = numero % 100;

    }
    if (numero >= 20)
    {
        int primer_digito = numero/10;
        int segundo_digito = numero % 10;

        switch (primer_digito)
        {
            case 2:
                name = name + " twenty ";
                break;
            case 3:
                name = name + " thirty ";
                break;
            case 4:
                name = name + " forty ";
                break;
            case 5:
                name = name + " fifty ";
                break;
            case 6:
                name = name + " sixty ";
                break;
            case 7:
                name = name + " seventy ";
                break;
            case 8:
                name = name + " eighty ";
                break;
            case 9:
                name = name + " ninety ";
                break;
        }

        name = name + " " + int_name(segundo_digito);
    }
    if (numero >= 10)
    {
        switch (numero)
        {
            case 10:
                name = name + " ten ";
                break;
            case 11:
                name = name + " eleven ";
                break;
            case 12:
                name = name + " twelve ";
                break;
            case 13:
                name = name + " thirteen ";
                break;
            case 14:
                name = name + " fourteen ";
                break;
            case 15:
                name = name + " fifteen ";
                break;
            case 16:
                name = name + " sixteen ";
                break;
            case 17:
                name = name + " seventeen ";
                break;
            case 18:
                name = name + " eighteen ";
                break;
            case 19:
                name = name + " nineteen ";
                break;
        }
    }
    if (numero >= 0)
    {
        switch (numero)
        {
            case 1:
                name = name + " one ";
                break;
            case 2:
                name = name + " two ";
                break;
            case 3:
                name = name + " three ";
                break;
            case 4:
                name = name + " four ";
                break;
            case 5:
                name = name + " five ";
                break;
            case 6:
                name = name + " six ";
                break;
            case 7:
                name = name + " seven ";
                break;
            case 8:
                name = name + " eight ";
                break;
            case 9:
                name = name + " nine ";
                break;

        }
    }
    return name;
}

bool leap_year(int year)
{
    return year > 1582 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int getValue(char character)
{
    switch (character)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int roman(string roman_number)
{
    int total = 0;
    while (!roman_number.empty())
    {
        if (getValue(roman_number[0]) >= getValue(roman_number[1]) || roman_number.size() == 1)
        {
            total += getValue(roman_number[0]);
            roman_number.erase(0,1);
        }
        else
        {
            total += getValue(roman_number[1]) - getValue(roman_number[0]);
            roman_number.erase(0,2);
        }
    }
    return total;
}

bool palindrome(string word)
{
    if (word.size() == 1)return true;
    if (word[0] == word[word.size() - 1])
    {
        if (word.size() == 2)return true;
        word.erase(0,1);
        word.erase(word.size() - 1, 1);

        return palindrome(word);
    }
    return false;
}

bool find(string str, string match)
{
    if (str.empty())return false;
    if (str.substr(0,match.size()) == match)return true;
    else
    {
        str.erase(0,1);
        return find(str,match);
    }
}

int digits(int number)
{
    if (number < 10)return 1;
    else return 1 + digits(number/10);
}


int main()
{
    cout<<digits(1);
    return 0;
}
