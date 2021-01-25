#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    const long long int p_cycle = 23, e_cycle = 28, i_cycle = 33;
    const long long int MAX = 21252;
    long long int p_peak, e_peak, i_peak, d;
    cin>>p_peak>>e_peak>>i_peak>>d;
    long long int peaks[MAX];

        memset(peaks, 0, MAX);
        for (long long int i = 1; p_peak + p_cycle * i < MAX; i++)
        {
            // long long int day = p_peak + p_cycle * i;
            // cout<<day<<" ";
            peaks[p_peak + p_cycle * i] += 1;
        }
        for (long long int i = 1; e_peak + e_cycle * i < MAX; i++)
        {
            // long long int day = e_peak + e_cycle * i;
            //  cout<<day<<" ";
            peaks[e_peak + e_cycle * i] += 1;

        }

        for (long long int i = 1; i_peak + i_cycle * i < MAX; i++)
        {
            long long int day = i_peak + i_cycle * i;
            cout<<day<<" ";
            peaks[i_peak + i_cycle * i] += 1;
            if (peaks[i_peak + i_cycle * i] == 3)
            {
                cout  << '\n'<< (i_peak + i_cycle * i) - d << endl;
            }
        }





    return 0;
}
