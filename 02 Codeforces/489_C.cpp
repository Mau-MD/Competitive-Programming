#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>l>>n;
    if (n == 0 && l == 1)
    {
        cout<<"0 0";
        return 0;
    }
    if (n == 0 || 9 * l < n)
    {
        cout<<"-1 -1";
        return 0;
    }
    string ansMax = "", ansMin = "";
    for (int i=0;i<l;i++)
    {
        int minn = min(9,n);
        n -= minn;
        ansMax += to_string(minn);
    }

    ansMin = ansMax;
    reverse(ansMin.begin(), ansMin.end());

    if (ansMin[0] == '0')
    {
        int i = 1;
        while (true)
        {
            if (ansMin[i] != '0')
            {
                string change = ansMin.substr(i,1);
               // cout<<"change "<<change<<endl;
                int newNumber = stoi(change) - 1;
             //   cout<<"new Number "<<newNumber<<endl;
                string aux = to_string(newNumber);
            //    cout<<"aux "<<aux<<endl;
                ansMin[i] = aux[0];
                ansMin[0] = '1';
                break;
            }
            i++;
        }
    }

    cout<<ansMin<<" "<<ansMax;

    return 0;
}