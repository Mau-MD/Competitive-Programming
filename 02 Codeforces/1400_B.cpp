#include <bits/stdc++.h>
using namespace std;

// She'll make a fine swordwoman someday
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int d;

    map<int,int>freq;
    for (int i=0;i<n;i++)
    {
        cin>>d;
        freq[d]++;
    }

    int querry;
    cin>>querry;


    map<int,int>gang; // Initial gang
    for (auto c:freq)
    {
        if (c.second >= 8)gang[8]++;
        else if (c.second >= 6)gang[6]++;
        else if (c.second >= 4)gang[4]++;
        else if (c.second >= 2)gang[2]++;
    }

    for (int i=0;i<querry;i++) // We have the frec, then a map to story gangs
    {
        /*
        for (auto c:gang)
        {
            cout<<"i : "<<c.first<<" "<<c.second<<endl;
        }       
        */
       
        char aux;
        cin>>aux;
        int l;
        cin>>l;

        // Querry update

        if (aux == '+')
        {
            freq[l]++; // Change or not
            if (freq[l] % 2 == 0 && freq[l] <= 8)
            {
                gang[freq[l]]++;
                gang[freq[l]-2]--;
            }
        }
        else if (aux == '-')
        {
            freq[l]--;
            if (freq[l] % 2 != 0 && freq[l] <= 8)
            {
                gang[freq[l]-1]++;
                gang[freq[l]+1]--;
            }
        }

        bool flag = false;
        if (gang[8]>=1)flag = true;
        else if ((gang[6] >= 1 && gang[2] >= 1) || (gang[6] >=1 && gang[4] >= 1) || (gang[6] >=2))flag = true;
        else if (gang[4] >= 2)flag = true;
        else if (gang[4] >= 1 && gang[2] >= 2)flag = true;

        if (flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}