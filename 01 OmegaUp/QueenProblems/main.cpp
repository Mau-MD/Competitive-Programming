#include <iostream>
#define MAX 1002

using namespace std;


int n, res = 0;
int current[MAX];

bool possible(int row)
{
    for (int i=0;i<row;i++)
    {
        if (current[row] == current[i] || abs(row - i) == abs(current[row] - current[i]))
        {
            return false;
        }
    }
    return true;
}

void solve(int row)
{
    if (row == n)
    {
        res++;
        for (int i=0;i<n;i++)
        {
            cout<<current[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            current[row] = i;
            if (possible(row))
            {
                solve(row+1);
            }
        }
    }
}

int main()
{
    cin>>n;
    solve(0);
    cout<<res<<endl;
    return 0;
}
