#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int n,dato, random;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        arr.push_back(dato);
    }

    for (int i=0;i<arr.size();i++)
    {
        random = rand() % arr.size();
        if (i!=random)
        {
            swap(arr[i], arr[random]);
        }
        else
        {
            i--;
        }
    }

    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}