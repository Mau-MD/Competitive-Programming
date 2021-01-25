#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n==1)return false;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        int n;
        cin >> n;
        if (n==0)break;
        int i = n - 2, j = 2;
        while (true)
        {
            if (i + j > n)i--;
            else if (i + j == n)
            {
                if (isPrime(i) && isPrime(j))
                {
                    cout <<n<<" = "<< j << " + " << i << endl;
                    break;
                } else
                {
                    i--;
                    j++;
                }
            } //else if (i + j < n)j++;R
        }
    }
    return 0;
}
