#include <bits/stdc++.h>
using namespace std;

int agua[9][9];

int solve(int x, int y, int l)
{
    if (x == 8 && y == 8)return l;
    else if (l <= 0 ) return -999;
    else if (x == 8) return solve(x,y+1,l + agua[y+1][x] - 1);
    else if (y == 8) return solve(x+1, y, l + agua[y][x+1] - 1);
    else return max(solve(x,y+1,l + agua[y+1][x] - 1), solve(x+1, y, l + agua[y][x+1] - 1));
}


int main()
{
    memset(agua, 0, sizeof(agua[0][0]) * 64);
    agua[0][3] = 4; agua[0][8] = 9;
    agua[1][6] = 3;
    agua[2][0] = 2 ; agua[2][1] = 2; agua[2][7] = 3;
    agua[3][5] = 4; agua[3][8] = 3;
    agua[4][0] = 1; agua[4][1] = 1; agua[4][3] = 2;
    agua[5][1] = 1; agua[5][6] = 4; agua[5][8] = 1;
    agua[6][2] = 2; agua[6][5] = 4;
    agua[7][0] = 1; agua[7][6] = 2; agua[7][8] = 1;
    agua[8][0] = 7; agua[8][4] = 3; agua[8][5] = 4;

    cout<< solve(0,0,3);

    return 0;
}
