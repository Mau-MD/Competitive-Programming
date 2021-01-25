#include <iostream>
#include <vector>
using namespace std;
using ll =  unsigned long long int;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q, n,d;
    cin>>q>>n;

    vector<ll>sumas;
    ll s=0;

    for (int i=0;i<n;i++)
    {
        cin>>d;
        s += d;
        sumas.push_back(s);
    }

    ll querry;
    int low, high, mid;
    for (int qq = 0; qq < q; qq++)
    {
        cin >> querry;

        low = 0, high = n - 1;

        while (true)
        {
            mid = (low + high) / 2;
            if (sumas[mid] == querry)
            {
                cout<<mid + 1<<" "<<0<<'\n';
                break;
            }
            else if (high - low <= 1)
            {
                if (sumas[high] <= querry)
                {
                    cout<<high + 1<<" "<<(ll)querry-sumas[high]<<'\n';
                    break;
                }
                else if (sumas[low] < querry)
                {
                    cout<<low + 1<<" "<<(ll)querry - sumas[low]<<'\n';
                    break;
                }
                else
                {
                    cout<<0<<" "<<querry<<'\n';
                    break;
                }
            }
            else if (sumas[mid] > querry)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
    }

    return 0;
}