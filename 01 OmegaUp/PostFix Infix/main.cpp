#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Si es letra push
    // Si es signo pop 2 y realizar op

    string exp;
    getline(cin,exp);
    stack<int>valores;

    int a,b, res = 0;
    for (int i=0;i<exp.size();i++)
    {
        if (exp[i] == ' ')continue;
        if (exp[i] == '/')
        {
            b = valores.top();
            valores.pop();
            a = valores.top();
            valores.pop();
            res = b / a;
            valores.push(b/a);
        }
        else if (exp[i] == '*')
        {
            b = valores.top();
            valores.pop();
            a = valores.top();
            valores.pop();
            res = b  * a;
            valores.push(b*a);

        }
        else if (exp[i] == '-')
        {
            b = valores.top();
            valores.pop();
            a = valores.top();
            valores.pop();
            res = (b - a);
            valores.push(b-a);

        }
        else if (exp[i] == '+')
        {
            b = valores.top();
            valores.pop();
            a = valores.top();
            valores.pop();
            res = (b + a);
            valores.push(b+a);

        }
        else
        {
            valores.push(exp[i] - 48);
        }
    }

    cout<<res;
    return 0;
}
