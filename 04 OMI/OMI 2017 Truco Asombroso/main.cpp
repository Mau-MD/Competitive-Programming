#include <bits/stdc++.h>
using namespace std;

/*
int solve(string a)
{
    if (a.size() == 2 && a[0] == '1' && a[1] == '1')return 2;
    else if (a.size() == 1)return 0;

    if (a[0] == '0')
    {
        int zeroCount = 1;
        for (int i=1;true;i++)
        {
            if (a[i] != '0')
            {
                a = a.substr(i,a.size() - i);
               // cout<<"NewString "<<newA<<endl;
                return zeroCount + solve(a);
            }
            zeroCount++;
        }
    }
    else if (a[0] == '1' && a[1] == '0')
    {
        int zeroCount = 2;
        for (int i=2;true;i++)
        {
            if (a[i] != '0')
            {
                a = a.substr(i,a.size()-i);
          //      cout<<"Resta String "<<newA<<endl;
                return 1 + zeroCount + solve(a);
            }
            zeroCount++;
        }
    }
    else // sumar
    {
        int oneCount = 1;
        for (int i=1;true;i++)
        {
            if (a[i] == '0')
            {
                a[i] = '1';
                a = a.substr(i,a.size() - i);
             //   cout<<"Suma String "<<newA<<endl;
                return 1 + oneCount + solve(a);
            }
            oneCount++;
        }
    }
}
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string a;
    cin>>n>>a;

    reverse(a.begin(),a.end());
    int zeroCount, oneCount;
    int ans = 0;
    for (int i=0;i<a.size()-1;i++) // tamano 8 cuando este en el 6
    {
        if (i == a.size() - 2 && a[i] == '1' && a[i+1] == '1')
        {
            ans+=2;
            break;
        }
        if (a[i] == '0')
        {
            for (int j=i;true;j++)
            {
                if (a[j] != '0') // encontramos un uno
                {
                    i = j - 1;
                    break;
                }
                ans++;
            }
        }
        else if (a[i] == '1' && a[i+1] == '0') // restar
        {
            ans++;
            a[i] = '0';
            i--;
        }
        else
        {
            ans++;
            for (int j=i;true;j++)
            {
                if (a[j] != '1')
                {
                    a[j] = '1';
                    i = j - 1;
                    break;
                }
                ans++;
            }
        }
    }
    cout<<ans;

    return 0;
}
