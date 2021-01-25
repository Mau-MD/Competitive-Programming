#include <iostream>
#define MAX 102
int n;
int mat[MAX][MAX];
using namespace std;

bool diag(int y, int x)
{
    int currX = x, currY = y, cuenta = 0;
    while (true)
    {
        currY--;
        currX--;
        if (currX >= 0 && currX < n && currY >= 0 && currY <n && mat[currY][currX] != -1 && mat[currY][currX] != 1)cuenta++;
        else break;
    }
    currX = x;
    currY = y;
    while (true)
    {
        currX++;
        currY++;
        if (currX >= 0 && currX < n && currY >= 0 && currY <n && mat[currY][currX] != -1 && mat[currY][currX] != 1)cuenta++;
        else break;
    }
    return cuenta >= 4;
}

bool diagDer(int y, int x)
{
    int currX = x, currY = y, cuenta = 0;
    while (true)
    {
        currY--;
        currX++;
        if (currX >= 0 && currX < n && currY >= 0 && currY <n && mat[currY][currX] != -1 && mat[currY][currX] != 1)cuenta++;
        else break;
    }
    currX = x;
    currY = y;
    while (true)
    {
        currX--;
        currY++;
        if (currX >= 0 && currX < n && currY >= 0 && currY <n && mat[currY][currX] != -1 && mat[currY][currX] != 1)cuenta++;
        else break;
    }
    return cuenta >= 4;
}

bool hor(int y, int x)
{
    int currX = x, currY = y, cuenta = 0;
    while (true)
    {
        currX--;
        if (currX >= 0 && currX < n && mat[y][currX] != -1 && mat[y][currX] != 1)cuenta++;
        else break;
    }
    currX = x;
    while (true)
    {
        currX++;
        if (currX >= 0 && currX < n && mat[y][currX] != -1 && mat[y][currX] != 1)cuenta++;
        else break;
    }
    return cuenta >= 4;
}

bool vert(int y, int x)
{
    int currX = x, currY = y, cuenta = 0;
    while (true)
    {
        currY--;
        //cout<<currY<<endl;
        //cout<<mat[currY][x]<<endl;
        if (currY >= 0 && currY < n && mat[currY][x] != -1 && mat[currY][x] != 1)cuenta++;
        else break;
    }
    currY = y;
    while (true)
    {
        currY++;
        if (currY >= 0 && currY < n && mat[currY][x] != -1 && mat[currY][x] != 1)cuenta++;
        else break;
    }
    return cuenta >= 4;
}

bool win(int y, int x)
{
    //cout<<y<<" "<<x<<endl;
    mat[y][x] = 0;
    if (diag(y,x) || hor(y,x) || vert(y,x) || diagDer(y,x))
    {
        mat[y][x] = -1;
        return true;
    }
    mat[y][x] = -1;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int x,y,t;
    int p;
    cin>>t;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            mat[i][j] = -1;
        }
    }

    for (int i=0;i<t;i++)
    {
        cin>>x>>y;
        cin>>p;
        mat[n-(y-1)-1][x-1] = p;
    }

/*
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
*/


    int res = 0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (mat[i][j] == -1 && win(i,j))
            {
                cout<<j+1<<" "<<(n-(i-1)-1)<<endl;
            }
        }
    }
    return 0;
}
