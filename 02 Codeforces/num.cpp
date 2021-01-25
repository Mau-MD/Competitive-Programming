#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    double ans = 0;
    double res = 0;
    for (double n=1;n<10.0f;n+=0.01f)
    {
        double first = (22.0f - (2.0f * n));
        ans = first * first * n;
        if (ans > res)
        {
            res = ans;
            cout<<ans<<" "<<n<<endl;
        }
    }

    return 0;
}