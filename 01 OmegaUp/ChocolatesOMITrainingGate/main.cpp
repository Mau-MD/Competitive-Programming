#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long int n,m;
    cin>>n>>m;
    long int mayorX[n], mayorY[m];
    for (long int i=0;i<n-1;i++)
    {
        cin>>mayorX[i];
    }
    for (long int i=0;i<m-1;i++)
    {
        cin>>mayorY[i];
    }

    sort(mayorX, mayorX + n -1, greater<int>());
    sort(mayorY, mayorY + m - 1, greater<int>());

    long int cortesX = 1, cortesY = 1;
    long int valor = 0;
    for (long int i=0;i<n+m-2;i++)
    {
        if (cortesY >= m || mayorX[cortesX-1] > mayorY[cortesY-1])
        {
            valor+=mayorX[cortesX-1] * cortesY;
            cortesX++;
        } else if (cortesX >= n || mayorX[cortesX-1] <= mayorY[cortesY-1])
        {
            valor+=mayorY[cortesY-1] * cortesX;
            cortesY++;
        }
    }
    cout<<valor;


    return 0;
}
