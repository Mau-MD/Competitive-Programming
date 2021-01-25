#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    } else if (n == 2)
    {
        cout << "3";
        return 0;
    } else
    {
        long long int  a = 2, b = 1, c;
        for (long long int i = 4; true; i++)
        {
            c = a + b;
            b = a;
            a = c;
            if (n == c)
            {
                cout <<(long long int) i;
                return 0;
            } else if (c > n)
            {
                cout << "-1";
                return 0;
            }
        }

    }
}
