#include <bits/stdc++.h>
using namespace std;

const int maxN = 20002;
int BIT[maxN];
int n;

void update(int x, int val)
{
    for (;x <= n; x+= x & -x)
    {
        BIT[x] += val;
    }
}

int querry(int x)
{
    int ans = 0;
    for (;x > 0; x-= x & -x)
    {
        ans+=BIT[x];
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        memset(BIT,0,sizeof(BIT));
        cin>>n;
        int ans[n];
        ans[1] = 1;
        cout<<"h"<<endl;
        for (int i=0;i<n;i++)
        {
            if (i!=1)update(i,1);
        }
        int free = n-1;
        int lastPos = 1;
        cout<<"hola"<<endl;
        for (int i=2;i<=n;i++)
        {
            // tengo que moverme i +1 casillas libres
            // no es i, es cuantos hay atras de mi posicion nueva
            int mover = (i+1 + querry(lastPos)) % free; // a que casilla libre en especifico
            if (mover == 0)mover = free;

            int low = 0, high = n-1, mid;
            while (high - low > 1)
            {
                mid = (low + high) / 2;
                if (querry(mid) >= mover)
                {
                    high = mid;
                }
                else 
                {
                    low = mid;
                }
            }
            int qLow = querry(low);
            int qHigh = querry(high);
            if (qLow == qHigh) // la celda esta en low
            {
                ans[low] = i;
                update(low,-1);
                lastPos = low;
            }
            else
            {
                if (qLow == mover) // la celda esta en low
                {
                    ans[low] = i;
                    update(low,-1);
                    lastPos = low;
                }
                else // la celda esta en high
                {
                    ans[high] = i;
                    update(high,-1);
                    lastPos = high;
                }
            }
            free--;
        }
        for (int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }

    }

    return 0;
}