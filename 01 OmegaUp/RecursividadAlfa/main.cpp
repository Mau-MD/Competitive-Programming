#include <iostream>
#include <algorithm>
#define N 160
using namespace std;

int check[N];

void init()
{
    fill_n(check, N, -1);
}

int alfa(int n)
{
    int f;
    if (check[n]!= -1)return check[n];
    if (n<50)
    {
        f = 2;
    }
    else if (n>=50)
    {
        f = alfa(n-1)+(alfa(n-5)*2);
    }
    check[n] = f;
    return f;
}


int main ()
{
    init();
    int n;
    cin>>n;
    cout<<alfa(n);


    return 0;
}