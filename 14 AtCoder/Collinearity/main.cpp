#include <bits/stdc++.h>
using namespace std;

float slope, b;
bool ok;

void calculateEquation(float x1, float y1, float x2, float y2)
{
    if (x2 - x1 == 0) // Indefinida
    {
        slope = x2;
        ok = true;
        return;
    }
    else if (y2 - y1 == 0)
    {
        slope = 0;
        b = y1;
        ok = false;
        return;
    }
    else slope = (y2 - y1) / (x2 - x1);
    // y = mx + b
    // y1 - (slope * x1) =  b
    b = y1 - (slope * x1);
    ok = false;
}

bool isLine(float x1, float y1)
{
    if (ok)
    {
        if (x1 == slope)return true;
        return false;
    }
    if (y1 == slope * x1 + b)return true;
    return false;
}

int main()
{
    int n;
    ok = false;
    cin>>n;
    vector<pair<float,float>>p;
    for (int i=0;i<n;i++)
    {
        float x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i == j)continue;
            calculateEquation(p[i].first, p[i].second, p[j].first, p[j].second);
            for (int k=0;k<n;k++)
            {
                if (i == k || j == k)continue;
                if (isLine(p[k].first, p[k].second))
                {
                //    cout<<i<<" "<<j<<" "<<k;
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
