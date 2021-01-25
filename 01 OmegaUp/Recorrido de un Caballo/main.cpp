    #include <bits/stdc++.h>
    using namespace std;
    #define MAX 105
    bool v[MAX][MAX];

    int n,c,xi,yi,xf,yf,p,q;

    struct solve {
        int x;
        int y;
        int d;
        solve(int x1,int y1,int d1):x(x1),y(y1),d(d1){}
    };


    int bfs() {
        solve in(xi, yi, 0);
        queue<solve> Cola;
        Cola.push(in);

        int dx[] = {p,q,q,p,-p,-q,-q,-p};
        int dy[] = {q,p,-p,-q,-q,-p,p,q};

        while (!Cola.empty()) {
            solve now = Cola.front();
            Cola.pop();
            if (now.x == xf && now.y == yf)return now.d;
            if (v[now.x][now.y])continue;
            v[now.x][now.y] = true;
            for (int i = 0; i < 8; i++)
            {
                int x= now.x + dx[i];
                int y = now.y + dy[i];
                if (x>0 && x<=c && y>0 && y<=n)
                {
                    solve r(x,y,now.d+1);
                    Cola.push(r);
                }
            }
        }
        return -1;

    }



    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cin>>n>>c>>xi>>yi>>xf>>yf>>p>>q;
        cout<<bfs()<<"\n";

        return 0;
    }