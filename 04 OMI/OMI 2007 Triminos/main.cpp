#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    cin>>n>>m;
    int q;
    cin>>q;
    int tot = n * m;

    for (int qq=0;qq<q;qq++)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        a--;b--;c--;d--;e--;f--;

        int dx[] = {1,1,0,-1,-1,-1,0,1};
        int dy[] = {0,1,1,1,0,-1,-1,-1};

        bool flag = false;
        for (int i=0;i<8;i++)
        {
            int x = b + dx[i];
            int y = a + dy[i];
            if (x == d && y == c)
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout<<0<<endl;
            continue;
        }


    }

    return 0;
}
