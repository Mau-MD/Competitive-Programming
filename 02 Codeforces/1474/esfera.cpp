#include <bits/stdc++.h>
using namespace std;

using ld = long double;

struct vector3 {
    ld x,y,z;
};

ld distancia(vector3 a, vector3 b)
{
    ld res = (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y) + (b.z - a.z) * (b.z - a.z);
    res = sqrt(res);
    return res;
}

vector3 puntoMedio(vector3 a, vector3 b)
{
    vector3 res = {(a.x + b.x) / 2, (a.y + b.y) / 2, (a.z + b.z) / 2};
    return res;
}

vector3 coordToVector(vector3 a, vector3 b)
{
    return {b.x - a.x, b.y - a.y, b.z - a.z};
}

vector3 getPoint(ld alpha, vector3 vect)
{
    vector3 ans;
    ans.x = alpha * vect.x;
    ans.y = alpha * vect.y;
    ans.z = alpha * vect.z;
    return ans;
}

vector3 getPoint(ld alpha, vector3 coordReferencia, vector3 vect) // Ya tengo punto
{
    vector3 ans;
    ans.x = coordReferencia.x + (alpha * vect.x);
    ans.y = coordReferencia.y + (alpha * vect.y);
    ans.z = coordReferencia.z + (alpha * vect.z);
    return ans;
}

bool insideCircle(vector3 coord, vector3 medio, ld radio)
{
    if ((coord.x - medio.x) * (coord.x - medio.x) + (coord.y - medio.y) * (coord.y - medio.y) + 
    (coord.z - medio.z) * (coord.z - medio.z) <= (radio * radio))return true;
    return false;
}


bool can(double alpha, vector3 referencia, vector3 vect, vector3 medio, ld radio)
{
    vector3 point = getPoint(alpha, vect); // Referencia y vector
    if (insideCircle(point, medio, radio))return true;
    return false;
}

double EPS = 1e-9;

int main()
{
    ld a,b,c,d,e,f;
    vector3 x,y;
    cin>>a>>b>>c>>d>>e>>f;
    x = {a,b,c}, y = {d,e,f};

    ld radio = distancia(x,y) / 2;
    vector3 pm = puntoMedio(x,y);
    vector3 vect = pm;

    if (insideCircle({0,0,0},pm,radio))
    {
        cout<<fixed<<setprecision(3)<<0.000<<" "<<0.000<<" "<<0.000<<endl;
        return 0;
    }

    ld low = 0, high = 1, mid;  
    
    while ((high - low) >= EPS)
    {
        mid = (low + high)/ 2;
        if (can(mid, pm, vect, pm, radio))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    vector3 ans = getPoint(high, vect);
    cout<<fixed<<setprecision(3)<<ans.x<<" "<<ans.y<<" "<<ans.z<<endl;



    return 0;
}