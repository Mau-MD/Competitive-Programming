#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int n, u, q;
int a[MAX], dif[MAX-1];


void updateData(int index, int val)
{
    a[index - 1] += val;
    dif[index-2] = abs(a[index - 1] - a[index-2]);
    dif[index-1] = abs(a[index - 1] - a[index]);

}

int main()
{
    ofstream output;
    output.open("input.in");

    set<int>rep;
    srand(time(NULL));
    n = rand()%MAX + 1;
    u = (rand()%MAX + 1)/7;
    q = (rand()%MAX + 1)/2;
    output << n<<" "<<u<<" "<<q<<endl;
    for (int i = 0; i < n; i++)
    {
        int x = rand()%200 + 1;
        output<<x<<" ";
        a[i] = x;
    }
    output<<endl;
    for (int i=0;i<u;i++)
    {
        int x=MAX+10,h,m= 1;
        while (x >n)
        {
            x = rand() % MAX + 1;
        }
        h = rand()%200 - 100;
        do
        {
            h = rand() % 200 - 100;
        }while (a[x-1] + h <=0);
        while (true)
        {
            m = rand() % MAX + 1;
            if (!rep.count(m))
            {
                rep.insert(m);
                break;
            }
        }
        output<<x<<" "<<h<<" "<<m<<endl;
    }
    int ant = 0;
    for (int i=0;i<q;i++)
    {
        int ri,rf=MAX+1,m;
        do
        {
            ri = rand() % MAX + 1;
        } while (ri > n);
        int r = rand()%(n-ri+1);
        rf = ri + r;
        if (ri == n)ri--;
        if (rf == ri)rf++;
        ant +=2;
        output<<ri<<" "<<rf<<" "<<ant<<endl;

    }

    output.close();

    return 0;
}
