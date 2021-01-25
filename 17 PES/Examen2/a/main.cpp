#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int,int> pii;

int n;
char mat[1002][1002];
map<int,int>tam,start;

int diferentes(int start, int end, int j)
{
    int c = 0;
    for (int i = start + 1; i < end; i++)
    {
        if (mat[i][j] != mat[i-1][j])c++;
    }
    return c;
}

bool recur(int restantes, int tamano, int j)
{
    int dif = diferentes(start[tamano],start[tamano] + tam[tamano],j);
    if (dif >= restantes + 2)return true;
    else
    {

    }
}

void solve()
{
    cin>>n;
    vector<string>temp;
    for (int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        tam[a.size()]++;
        temp.push_back(a);
    }
    sort(temp.begin(),temp.end());

    for (int i=0;i<temp.size();i++)
    {
        if (start[temp.size()] == 0)start[temp.size()] = i;
        for (int j=0;j<temp[i].size();j++)
        {
            mat[i][j] = temp[i][j];
        }
    }

    for (auto t:tam)
    {
        int tamanoActual = t.first;
    }
}
/*
int diferentes(int tam, int j)
{
    int cuenta = 0;
    sort(adj[tam].begin(),adj[tam].end()); // Me aseguro que quede lexicograficamente menor
    for (int i=1;i<adj[tam].size();i++)
    {
        if (adj[tam][i][j] != adj[tam][i-1][j])cuenta++;
    }
    return cuenta;
}

void solve()
{
    cin>>n;
    set<int>tam;

    // Guardo el tamano de cada string
    for (int i=0;i<n;i++)
    {
        string d; cin>>d;
        tam.insert(d.size());
        adj[d.size()].push_back(d);
    }

    for (auto x:adj)
    {

    }


    // Empiezo por orden
    for (auto x : tam)
    {
        int tamActual = x; // Primero de los de tamano dos
        int restantes = tamActual;

        int dif = diferentes(tamActual, 0);
        if (dif >= restantes + 2)
        {
            cout<<"Yes";
            return;
        }

    }
}
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Primero checar todos los tamanos que hay
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
