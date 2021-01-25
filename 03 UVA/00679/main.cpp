#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isGreater(int a, int b, int c, int d)
{
    // a * d
    return a * d > b * c;
}

int main()
{
    while (true)
    {
        int x, y; // obj
        cin >> x >> y;
        if (x == 1 && y == 1)break;
        int lastRight_x = 0, lastRight_y = 1, lastLeft_x = 1, lastLeft_y = 0, current_x = 1, current_y = 1;
        // 1 / 2 , 2 / 1

        while (true)
        {
            if (current_x == x && current_y == y)break;

            if (isGreater(current_x, current_y, x, y))
            {
                // turn left
                cout << "L";

                lastLeft_x = current_x;
                lastLeft_y = current_y;

                current_x = current_x + lastRight_x;
                current_y = current_y + lastRight_y;
            } else
            {
                cout << "R";

                lastRight_x = current_x;
                lastRight_y = current_y;

                current_x = current_x + lastLeft_x;
                current_y = current_y + lastLeft_y;
            }
        }
        cout<<endl;
    }
    return 0;
}
