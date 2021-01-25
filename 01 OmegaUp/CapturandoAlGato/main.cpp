#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>divisores;

void getDivisors(long long int n)
{
    for (int i=1;i*i<n;i++)
    {
        if (n % i == 0)
        {
            if (n/i == i)divisores.push_back(i);
            else
            {
                divisores.push_back(i);
                divisores.push_back(n/i);
            }
        }
    }

    sort(divisores.begin(),divisores.end());
}

int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    long long int n, suma = 0;
    cin>>n;
    long long int ar[n];
    for (long long int i=0;i<n;i++)
    {
        cin>>ar[i];
        suma+=ar[i];
    }
    getDivisors(suma);

    long long int obj = 0;
    bool isPossible = false;


    for (auto x : divisores)
    {
        cout<<x<<" ";
    }

    for (long long int i=0;i<divisores.size();i++)
    {
        obj = 0;
        for (long long int j=0;j<n;j++)
        {
            obj += ar[j];
            if (obj > divisores[i])
            {
                isPossible = false;
                obj = 0;
                break;
            }
            else if (obj == divisores[i])
            {
                obj = 0;
                isPossible = true;
            }
        }

        if (isPossible)
        {
            cout<<suma/divisores[i];
            break;
        }
        isPossible = false;
    }

    return 0;
}
