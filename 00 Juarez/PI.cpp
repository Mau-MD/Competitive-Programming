#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

bool hit(double x, double y)
{
    double a = x*x;
    double b = y*y;
    
    double distance = sqrtf(a + b);
    return distance <= 1.0;
}


int main()
{

    double hit_count=0,total=0;
    ll a = 23091965,c = 15051967, m = 15122003;
    double x, y;
    ll z = 1;

    while (true)
    {
        z = (a * z + c) % m; // Generar numero aleatorio
        x = (double) z/(m-1); // Pasarlo al rango 0 .. 1
        z = (a * z + c) % m; // Generar otro numero aleatorio
        y = (double) z/(m-1); // Pasarlo al rango 0 .. 1

        if (hit(x,y))hit_count++;
        total++;
        cout<<4 * hit_count/total<<endl;
    }
    

    return 0;
}