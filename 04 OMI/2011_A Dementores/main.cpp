#include <bits/stdc++.h>
using namespace std;

int n,o;
bool mat[1002][1002];

int solve(bool flag)
{
    int ans = 0;
    if (flag) // harry
    {
        for (int i=1;i<n;i++) // try every dementor
        {
            int sI = i, sJ = 0, steps = 0;
            if (mat[sI][sJ])continue;
            while(true)
            {
                for (;; sJ++)
                {
                    if (sJ >= n || mat[sI][sJ])
                    {
                        sJ--;
                        steps++;
                        break;
                    }
                }
                if (sI == n - 1 && sJ == n - 1)
                {
                    ans = max(ans,steps);
                    break;
                }
                for (;; sI++)
                {
                    if (sI >= n || mat[sI][sJ])
                    {
                        sI--;
                        steps++;
                        break;
                    }
                }
                if (sI == n - 1 && sJ == n - 1)
                {
                    ans = max(ans,steps);
                    break;
                }
            }

        }
    }
    else
    {
        for (int j=1;j<n;j++) // try every dementor
        {
            int sI = 0, sJ = j, steps = 0;
            if (mat[sI][sJ])continue;
            while(true)
            {
                for (;; sI++)
                {
                    if (sI >= n || mat[sI][sJ])
                    {
                        sI--;
                        steps++;
                        break;
                    }
                }
                if (sI == n - 1 && sJ == n - 1)
                {
                    ans = max(ans,steps);
                    break;
                }
                for (;; sJ++)
                {
                    if (sJ >= n || mat[sI][sJ])
                    {
                        sJ--;
                        steps++;
                        break;
                    }
                }
                if (sI == n - 1 && sJ == n - 1)
                {
                    ans = max(ans,steps);
                    break;
                }

            }

        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>o;
    for (int i=0;i<o;i++)
    {
        int x,y;
        cin>>x>>y;
        mat[y][x] = true;
    }
    cout<<min(solve(true), solve(false));

    return 0;
}
