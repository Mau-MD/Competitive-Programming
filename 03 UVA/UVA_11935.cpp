#include <bits/stdc++.h>
using namespace std;

bool keep = true;
vector<pair<string, pair<int,int>>> instructions;
        //                 km n 
bool simulation(double gas)
{
    int x = 0; 
    int i = 0;
    double drop = 0; 
    double rate = 0;
    double curr_gas = gas;
    while (true)
    {
        curr_gas -= (drop + rate);
        if (x > instructions[i].second.first)x--;
        if (instructions[i].second.first == x)
        {
            string state = instructions[i].first;
            if (state == "Fuel")
            {
                int n = instructions[i].second.second; // This is the amount in 100 km
                drop = n / 100.000;
            }
            else if (state == "Leak")
            {
                rate++;
            }
            else if (state == "Mechanic")
            {
                rate = 0;
            }
            else if (state == "Gas")
            {
                curr_gas = gas;
            }
            else if (state == "Goal")
            {
                if (curr_gas >= 0)return true;
                return false;
            }
            i++;
        }
        x++;
    }

}

void binary()
{
    double i = 0.00, j = 1000000.00, mid = (i + j) / 2.00, ans = 0;
    while (fabs(j - i ) > 1e-9)
    {
        if (simulation(mid/100.00) == true)
        {
            ans = mid/100.00;
            j = mid;
        }
        else
        {
            i = mid;
        }
        mid = (i + j) / 2.00;

    }

    cout<<fixed<<setprecision(3)<<ans<<endl;
}

void solve()
{
    instructions.clear();
    while (true)
    {
        int km, n = 0;
        string s;
        cin>>km>>s;
        if (s == "Fuel" || s == "Gas")
        {
            string trash;
            cin>>trash;
        }

        if (s == "Fuel")
        {
            cin>>n;
        }
        // End the program
        if (km == 0 && s == "Fuel" && n == 0)
        {
            keep=false;
            return;
        }
        // Read Input
        instructions.push_back(make_pair(s, make_pair(km,n)));

        if (s == "Goal")break;
    }

    binary();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (keep)
    {
        solve();
    }

    return 0;
}