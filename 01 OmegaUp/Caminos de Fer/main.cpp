#include <iostream>
#include <queue>
using namespace std;

int n,k, d=0;

struct solve
{
    int x;
    int y;
    solve(int x1, int y1):x(x1),y(y1){}
};

int dx[] = {1,0};
int dy[] = {0,1};

void bfs(int x1, int y1)
{
    solve in(x1,y1);
    queue<solve>Cola;
    Cola.push(in);
    while(!Cola.empty())
    {
        solve now = Cola.front();
        Cola.pop();
        if (now.x == k-1 && now.y == n-1)d++;
        for (int i=0;i<2;i++)
        {
            int x = now.x + dx[i];
            int y = now.y + dy[i];
            if (x>=0 && x < k && y>=0 && y<n)
            {
                solve r(x,y);
                Cola.push(r);
            }
        }
    }
}
int main()
{
    cin>>n>>k;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<k;j++)
        {
            bfs(j,i);
        }
    }
    cout<<d;



    return 0;
}