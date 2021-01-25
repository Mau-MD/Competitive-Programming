#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> pii;

int n,k;
vector<pii>v;

double can(double t) // Tiempo t
{
    double minn = 1e18, maxx = 0.0;
    for (int i=0;i<n;i++)
    {
        double val = (v[i].first * t + v[i].second);
        minn = min(minn,val);
        maxx = max(maxx, val);
    }
    return maxx - minn;
}


int main()
{
    cin>>n>>k; // Lim de carrera
    for (int i=0;i<n;i++)
    {
        double a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    double l = 0.0, r = (double)k, m1, m2, e = 1e-8;
    while ((r-l) > e)
    {
        m1 = l + (r - l) / 3;
        m2 = r - (r - l)/3;

        double v1 = can(m1);
        double v2 = can(m2);

        if (v1 > v2)
        {
            l = m1;
        }
        else
        {
            r = m2;
        }
    }
    cout<<fixed<<setprecision(6)<<can(l);


    return 0;
}
