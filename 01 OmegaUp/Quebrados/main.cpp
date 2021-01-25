#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int suma =0;
    int val1[10002],val2[10002];
    int j = -1;
    for (int i=100000;i>=0;i--)
    {
        int a = n * i;
        if (i-n != 0 && a % (i - n) == 0)
        {
            suma++;
            j++;
            val1[j] = i;
            val2[j] = a/(i-n);
            if (val1[j] == val2[j])break;
        }
    }
    cout<<suma<<endl;
    for (int i=0;i<=j;i++)
    {
        cout<<"1/"<<n<<" = 1/"<<val1[i]<<" + 1/"<<val2[i]<<endl;
    }
    return 0;
}
