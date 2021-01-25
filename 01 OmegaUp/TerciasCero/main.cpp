#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int cuenta_bits = 0;
    int suma = 0;
    vector<int>res;
    for (int i=13;i<(1<<n);i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i & (1<<j))
            {
                cuenta_bits++;
                res.push_back(ar[j]);
                suma+=ar[j];
            }
        }
        if (cuenta_bits == 3 && suma == 0)
        {
            cout<<res.size()<<endl;
            cout<<"[";
            for(auto x:res)
            {
                cout<<x<<" ";
            }
            cout<<"], ";
        }

        res.clear();
        suma = 0;
        cuenta_bits = 0;

    }
    return 0;
}
