#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> check1,check2;

    int n,dato,y,x;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>dato;

        if (dato==1)
        {
            cin>>y;
            if (!check1.empty() && check1.size()>=2)
            {
                check2.push(y);
            }
            else
            {
                check1.push(y);
            }
        }
        else
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
            cout<<x;
        }
    }

    return 0;
}