#include <bits/stdc++.h>
using namespace std;

char letras[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'
                ,'U','V','W','X','Y','Z'};
int main()
{
    bool o;
    cin>>o;
    if (!o)
    {
        long long int a;
        cin>>a;
        string ans;
        if (a == 26)
        {
            cout<<'Z'<<endl;
            return 0;
        }
        while (true)
        {
            long long int mode = a%26;
            a/=26;
            if (mode == 0)
            {
                ans.push_back(letras[25]);
                a--;
            }
            else ans.push_back(letras[mode-1]);
            if (a == 0)break;
            
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;

    }
    else
    {
        string a;
        cin>>a;
        unsigned long long int ans = 0;
        int sPower = a.size()-1;
        for (int i=0;i<a.size();i++)
        {
            unsigned long long int b = a[i] - 64;
            ans = ans + (b * pow(26,sPower));
            sPower--;
        }
        if (a.size()>=14)ans--;
        cout<< ans<<endl;
    }
    
    


    return 0;
}   