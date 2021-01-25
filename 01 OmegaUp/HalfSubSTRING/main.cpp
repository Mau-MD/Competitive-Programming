#include <iostream>
using namespace std;

int ar_sum[102];

int srq(int i, int j)
{
    if (i == 0 )return ar_sum[j];
    else return ar_sum[j] - ar_sum[i-1];
}


int main()
{
    int n, suma =0;
    cin>>n;
    int ar[n];
    int max_len = -1;

    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
        suma+=ar[i];
        ar_sum[i] = suma;
    }
    
    for (int len=2  ;len<=n;len++)
    {
        for (int i = 0; i + len * 2 - 1< n; ++i)
        {
            int a = srq(i,i + len-1);
            int b =srq(i + len, i + len*2-1);
            if (a == b && len > max_len)
            {
                max_len = len;
            }
        }
    }
    cout<<max_len * 2;

    return 0;
}
