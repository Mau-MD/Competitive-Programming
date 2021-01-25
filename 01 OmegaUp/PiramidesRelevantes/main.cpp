#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k=0,j;
    vector<int> check;
    cin>>n;
    int altura[n],relevancia[n];

    for (int i=0;i<n;i++)
    {
        cin>>altura[i]>>relevancia[i];
        check.push_back(altura[i]);
    }

    for (int i=0;i<n;i++)
    {
        k=i;
        j=i;
        if (i!=0)
        {
            while (altura[k]<check[i] || k!=n)
            {
                k--;
            }
        }
        if (i!=n)
            while (altura[j]<check[i] || j != 0)
            {
                j++;
            }
        cout<<i<<"    "<<k<<" "<<j<<endl;
    }


    return 0;
}