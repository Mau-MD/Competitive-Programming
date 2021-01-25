#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack <char> check;
    string a;
    int x,cuenta=0,izq=0,der=0;
    cin>>a;

    if (a.empty())
    {
        cout<<"0";
        return 0;
    }

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

    if (izq != der)
    {
        cout << "imposible";
        return 0;
    }

    for (int i=0;i<a.size();i++)
    {
        if (a[i]=='(' || a[i]=='[' || a[i]=='{' || a[i]=='<')
        {
            check.push(a[i]);
        }
        else if (check.empty())
        {
            cout<<"imposible";
            return 0;
        }
        else
        {
            x = check.top();
            check.pop();
            switch (a[i])
            {
                case ')':
                {
                    if (x != '(') {
                        cuenta++;
                    }

                    break;
                }
                case ']':
                {
                    if (x != '[') {
                        cuenta++;
                    }

                    break;
                }
                case '>':
                {
                    if (x != '<') {
                        cuenta++;
                    }

                    break;
                }
                case '}':
                {
                    if (x != '{') {
                        cuenta++;
                    }

                    break;
                }

            }
        }
    }
cout<<cuenta;


}