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
   bool imposible = false;

   for (int i=0;i<a.size();i++)
   {
        if (a[i]=='(' || a[i]=='[' || a[i]=='{' || a[i]=='<')
        {
            check.push(a[i]);
            izq++;
        } else
        {
            der++;
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

   if (izq!=der)
   {
       cout<<"imposible";
   } else
   {
       cout<<cuenta;
   }


}