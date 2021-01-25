#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<bitset<102> >cards;
    bitset<102>aux;
    vector<int>size;
    for (int i=0;i<n;i++)
    {
        int m, x;
        cin>>m;
        size.push_back(m);
        for (int j=0;j<m;j++)
        {
            // read cards
            cin>>x;
            cards[j][x] = true;
        }
    }

    bool flag = false;
    for (int i=0;i<n;i++)
    {
        flag = false;
        for (int j =0; j<n;j++)
        {
            if (i == j)continue;
            aux = cards[i] & cards[j];
            if (aux.count() > 0)
            {
                if (size[i] > size[j])
                {
                    flag = true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout<<"YES"<<endl;
        }
    }




    return 0;
}