#include <bits/stdc++.h>
using namespace std;

bool balanceado(string a)
{
    stack<char>balanced;



    for (int i=0;i<a.size();i++)
    {
        if (a[i]=='(' || a[i]== '{' || a[i]=='<' || a[i] =='[')
        {
            balanced.push(a[i]);
            continue;
        }
        else if (a[i]==')')
        {
            int x = balanced.top();
            balanced.pop();
            if (x=='(')
            {

            }
            else
            {
                return false;
            }
            continue;
        }
        else if (a[i]==']')
        {
            int x = balanced.top();
            balanced.pop();
            if (x=='[')
            {

            }
            else
            {
                return false;
            }
            continue;

        }
        else if (a[i]=='}')
        {
            int x = balanced.top();
            balanced.pop();
            if (x=='{')
            {

            }
            else
            {
                return false;
            }
            continue;

        }
        else if (a[i]=='>')
        {
            int x = balanced.top();
            balanced.pop();
            if (x=='<')
            {

            }
            else
            {
                return false;
            }
            continue;

        }

    }

    return(balanced.empty());

}

int cuenta(string a) {
    int izq = 0, der = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(' || a[i] == '{' || a[i] == '<' || a[i] == '[') {
            izq++;
        } else if (a[i] == ')' || a[i] == '}' || a[i] == '>' || a[i] == ']')
            der++;
    }

    if (izq != der) {
        return 1;
    }
return 0;
}



int main() {
    map<int,int>check;
    int cambio=0;
    bool x = true;
    string a;
    cin>>a;
    if (balanceado(a)){
        cout<<"0";
        x = false;
    }
    if (cuenta(a))
    {
        cout<<"imposible";
    }
    else if (x)
    {
        for (int i=0;i<a.size();i++)
        {
            switch (a[i])
            {
                case '(' : check['(']++; break;
                case '[' : check['[']++;break;
                case '{' : check['{']++;break;
                case '<' : check['<']++; break;
                case ')' : {
                    auto fix = check.find('(');
                    if (fix!=check.end())
                    {
                        check['(']--;
                        if (check['('] == 0) {
                            check.erase('(');
                        }
                    }
                    else {
                        cambio++;
                    }
                    break;
                }
                case ']' : {
                    auto fix1=check.find('[');
                    if (fix1!=check.end()) {
                        check['[']--;
                        if (check['['] == 0) {
                            check.erase('[');
                        }
                    } else {
                        cambio++;
                    }
                    break;
                }
                case '}' : {
                    auto fix2=check.find('{');
                    if (fix2!=check.end()) {
                        check['{']--;
                        if (check['{'] == 0) {
                            check.erase('{');
                        }
                    } else {
                        cambio++;
                    }
                    break;
                }
                case '>' : {
                    auto fix3=check.find('<');
                    if (fix3!=check.end()) {
                        check['<']--;
                        if (check['<'] == 0) {
                            check.erase('<');
                        }
                    } else {
                        cambio++;
                    }
                    break;
                }
            }

        }
        cout<<cambio;
    }


    return 0;
}