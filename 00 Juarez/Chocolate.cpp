#include <bits/stdc++.h>
using namespace std;

// Suponiendo que n siempre es la mas chica
int solve(int n, int m)
{
    if (n == m)return 0;
    int cantidad_de_veces_que_cabe = m / n;
    int m_sobrante = m % n;
    if (m_sobrante == 0)return cantidad_de_veces_que_cabe;
    return cantidad_de_veces_que_cabe + solve(m_sobrante,n);

}


int main()
{
    int n,m;
    cin>>n>>m;
    if (m < n)swap(n,m);
    cout<<solve(n,m);

    return 0;
}