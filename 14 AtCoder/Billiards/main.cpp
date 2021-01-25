#include <bits/stdc++.h>
using namespace std;

double distancia(int x1, int y1, int x2, int y2)
{
    double r = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(r);
}

double pendiente(double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}

double sacaB(double m, double x1, double y1)
{
    // y = mx + b
    // y - mx = b
    double b = y1 - (m * x1);
    return b;
}

double x1_,y1_,x2_,y2_;


int can(double x, double y)
{
    double m = abs(pendiente(x1_,y1_,x,y));
    double b = sacaB(m,x,y);

    if (y2_ == (m * x2_) + b) // Esta en el punto
    {
        return 0;
    }
    else if (y2_ - (m * x2_) + b > 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}
int main()
{
    cin>>x1_>>y1_>>x2_>>y2_;

    double low = 0, high = 1e6 + 2, mid;
    double EPS = 1e-6;
    while (high - low > EPS)
    {
        mid = (high + low) / 2;
        int r = can(mid,0);
        if (r == 0)
        {
            cout<<mid<<endl;
            break;
        }
        else if (r == 1)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout<<low<<endl;
    return 0;
}
