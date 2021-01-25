#include <bits/stdc++.h>
using namespace std;

int n,c,caminos=0;

struct solve {
    int x;
    int y;
    solve(int x1, int y1):x(x1),y(y1){}
};

int dx[] = {1,0};
int dy[] = {0,1};

int bfs()
{
    solve in(0,0);
    queue<solve>Cola;
    Cola.push(in);
    while (!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == n-1 && now.y == c-1)
        {
            caminos++;
            continue;
        }
        for (int i=0;i<2;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x>=0 && x<n && y>=0 && y<c)
            {
                solve r(x,y);
                Cola.push(r);
            }
        }
    }
    return caminos;
}


int main ()
{
    cin>>n>>c;
    cout<<bfs()%2017<<endl;
    return 0;
}