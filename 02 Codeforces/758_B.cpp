#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;

    vector<char>order(4);
    // 1 2 3 0
    for (int i=0;i<a.size();i++)
    {
        int pos = (i + 1) % 4;
        if (pos == 0)pos = 4;
        if (a[i] !='!')order[pos-1] = a[i];
    }

 
    cout<<endl;
    int res[4]; // r b y g
    memset(res,0,sizeof(res));

    for (int i=0;i<a.size();i++)
    {   

        int pos = (i + 1) % 4;
        if (pos == 0)pos = 4;

        if (a[i]=='!')
        {
            switch (order[pos-1])
            {
            case 'R':
                res[0]++;
                break;
            
            case 'B':
                res[1]++;
                break;
            
            case 'Y':
                res[2]++;
                break;
            
            case 'G':
                res[3]++;
                break;
            
            default:
                break;
            }
        }
    }

    for (int i=0;i<4;i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}