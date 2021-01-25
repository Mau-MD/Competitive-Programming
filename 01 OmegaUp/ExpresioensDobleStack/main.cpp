#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> check1,check2;

    int x,cuenta=0, izq=0,der=0;
    string a;
    cin>>a;

    for (int i=0;i<a.size();i++)
    {
        if (a[i]=='(' || a[i]=='[' || a[i]=='{' || a[i]=='<')
        {
            izq++;
        }
        else
        {
            der++;
        }
    }

    if (izq!=der)
    {
        cout<<"imposible";
        return 0;
    }


    for (int i=0;i<a.size();i++)
    {
        if (a[i]=='(' || a[i]=='[' || a[i]=='{' || a[i]=='<')
        {
            if (!check1.empty() && check1.size() >= 1000)
            {
                check2.push(a[i]);
            }
            else
            {
                check1.push(a[i]);
            }
        }
        else if (a[i]==')')
        {
            if (check2.empty())
            {
                x = check1.top();
                check1.pop();
            }
            else
            {
                x = check2.top();
                check2.pop();
            }
            if (x!='(')
            {
                cuenta++;
            }

        }
        else if (a[i]==']')
        {
            if (check2.empty())
            {
                x = check1.top();
                check1.pop();
            }
            else
            {
                x = check2.top();
                check2.pop();
            }
            if (x!='[')
            {
                cuenta++;
            }

        }
        else if (a[i]=='>')
        {
            if (check2.empty())
            {
                x = check1.top();
                check1.pop();
            }
            else
            {
                x = check2.top();
                check2.pop();
            }
            if (x!='<')
            {
                cuenta++;
            }

        }
        else if (a[i]=='}')
        {
            if (check2.empty())
            {
                x = check1.top();
                check1.pop();
            }
            else
            {
                x = check2.top();
                check2.pop();
            }
            if (x!='{')
            {
                cuenta++;
            }

        }
    }
    cout<<cuenta;
    return 0;
}