#include <iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    int a1 = (x2 - x1) * (y2-y1);
    int a2 = (x4 - x3) * (y4 - y3);
    int area;


    if (x3 >= x1 && x3 <= x2 && x4 >=x1 && x4 <= x2 && y3 >= y1 && y3 <= y2 && y4 >= y2)
    {
        area = a1 + a2 - ((x4 - x3)*(y2 - y3));
    }
    else if (x3 <= x1 && x3 >= x2 && x4 <=x1 && x4 >= x2 && y3 <= y1 && y3 >= y2 && y4 <= y2)
    {
        area = a1 + a2 - ((x2 - x1)*(y4 - y1));
    }
    else if (x3 >= x1 && x3 <= x2 && x4 >= x1 && x4 <= x2 && y4 >= y1 && y4 <= y2 && y3 <= y1)
    {
        area = a1 + a2 - ((x4 - x3)*(y4 - y1));
    }
    else if (x3 <= x1 && x3 >=x2 && x4 <= x1 && x4 >= x2 && y4 <= y1 && y4 >= y2 && y3 >= y1)
    {
        area = a1 + a2 - ((x2 - x1)*(y2 - y3));
    }
    else if (x3 >= x1 && x3 <= x2 && x4 >= x1 && x4 <= x2 && y3 <= y1 && y4 >= y2)
    {
        area = a1 + a2  - ((x4 -x3)*(y2-y1));
    }
    else if (x3 <= x1 && x3 >= x2 && x4 <= x1 && x4 >= x2 && y3 >= y1 && y4 <= y2)
    {
        area = a1 + a2  - ((x2-x1)*(y4-y3));
    }
    else if (y3 >= y1 && y3 <= y2 && y4 >= y1 && y4 <= y2 && x3 <= x1 && x4 >= x2)
    {
        area = a1 + a2 - ((y4-y3)*(x2-x1));
    }
    else if (y3 <= y1 && y3 >= y2 && y4 <= y1 && y4 >= y2 && x3 >= x1 && x4 <= x2)
    {
        area = a1 + a2 - ((y2-y1)*(x4-x3));
    }
    //
    else if (x3 >= x1 && x3 <= x2 && x4 >= x2 && y3 >= y1 && y3 <= y2 && y4 >= y2)
    {
        area = a1 + a2 - ((x2 - x3)*(y2 - y3));
    }
    else if (x3 <= x1 && x3 >= x2 && x4 <= x2 && y3 <= y1 && y3 >= y2 && y4 <= y2)
    {
        area = a1 + a2 - ((x4 - x1)*(y4 - y1));
    }
    //
    else if ( x3 <= x1 && x4 >= x1 && x4 <= x2 && y3 <= y2 && y3 >= y1 && y4 >= y2)
    {
        area = a1 + a2 -((x4-x1)*(y2-y3));
    }
    else if ( x3 >= x1 && x4 <= x1 && x4  >= x2 && y3 >= y2 && y3 <= y1 && y4 <= y2)
    {
        area = a1 + a2 -((x2-x3)*(y4-y1));
    }
    //
    else if (x3 <= x1 && x4 >= x1 && x4 <= x2 && y3 <= y1 && y4 >= y1 && y4 <= y2)
    {
        area = a1 + a2 - ((x4-x1)*(y4-y1));
    }
    else if (x3 >= x1 && x4 <= x1 && x4 >= x2 && y3 >= y1 && y4 <= y1 && y4 >= y2)
    {
        area = a1 + a2 - ((x2-x3)*(y2-y3));
    }
    //
    else if (x3 >= x1 && x3 <= x2 && x4 >= x2 && y4 >= y1 && y4 <= y2 && y3 <=y1)
    {
        area = a1 + a2 - ((x2-x3)*(y4-y1));
    }
    else if (x3 <= x1 && x3 >= x2 && x4 <= x2 && y4 <= y1 && y4 >= y2 && y3 >= y1)
    {
        area = a1 + a2 - ((x4-x1)*(y2-y3));
    }

    //
    //

    else if (x3 <= x1 && x4 >= x1 && x4 <= x2 && y4 >= y2 && y3 <= y1)
    {
        area = a1 + a2 - ((x4 - x1)*(y2 - y1));
    }
    else if (x3 >= x1 && x4 <=x1 && x4 >= x2 && y4 <= y2 && y3 >= y1)
    {
        area = a1 + a2 - ((x2 - x3)*(y4 - y3));
    }
    //
    else if (x3 <= x1 && x4 >= x2 && y3 >= y1 && y3 <= y2 && y4 >= y2)
    {
        area = a1 + a2 - ((x2 - x1 )*(y2 - y3));
    }
    else if (x3 >= x1 && x4 <= x2 && y3 >= y1 && y3 >=y2 && y4 <= y2)
    {
        area = a1 + a2 - ((x4 - x3 )*(y4 - y1));
    }
    //
    else if (x3 >= x1 && x3 <=x2 && x4 >=x2 && y3 <= y1 && y4 >= y2)
    {
        area = a1 + a2 - ((x2-x3)*(y2-y1));
    }
    else if (x3 <= x1 && x3 >= x2 && x4 <= x2 && y3 >=y1 && y4 <= y2)
    {
        area = a1 + a2 - ((x4-x1)*(y4-y2));
    }
    //
    else if (y4 >= y1 && y4 <= y2 && y3 <=y1 && x3 <=x1 && x4 >=x2)
    {
        area = a1 + a2 - ((x2-x1)*(y4 - y1));
    }
    else if (y4 <= y1 && y4 >= y2 && y3 >= y1 && x3 >= x1 && x4 <= x2)
    {
        area = a1 + a2 - ((x4-x3)*(y2 - y3));
    }
    else if (x3 >= x1 && x3 <= x2 && x4 >= x1 && x4 <= x2 && y3 >= y1 && y3 <= y2 && y4 >= y1 && y4  <=y2)
    {
        area = a1;
    }
    else if (x3 <=x1 && x3 >= x2 && x4 <= x1 && x4 >=x2 && y3 <=y1 && y3 >= y2 && y4 <= y1 && y4  >=y2)
    {
        area = a2;
    }
    else
    {
        area = a1 + a2;
    }
    cout<<area;








    return 0;
}
