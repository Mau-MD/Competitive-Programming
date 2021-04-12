/*
	Made by Mau:D
*/

#include <bits/stdc++.h>

using namespace std;


using ll = long long int;
using ld = long double;
using db = double;
using str = string;

using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;



#define mp make_pair
#define fst first
#define snd second

#define dbg(x) cout << "[" << (#x) << "]: " << (x) << endl
#define ln cout<<'\n';

#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define trav(a,x) for (auto& a: x)
#define arr array

int MOD = 1e9+7;
const ll INF = 1e18;
const ld PI = acos((ld)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;

constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x) { return 31-__builtin_clz(x); } // floor(log2(x))
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down

// Debug

void print()
{
  cout<<'\n';
}

template<typename First, typename ... Strings>
void print(First argument, const Strings&... rest)
{
  cout<<argument<<" ";
  print(rest...);
}

template<typename T>
void dbga(string nombre, T arr[], int size)
{
  cout<<'['<<nombre<<"]: ";
  for (int i=0;i<size;i++)
  {
	cout<<arr[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void dbga(string nombre, vector<T> arr)
{
  cout<<'['<<nombre<<"]: ";
  for (int i=0;i<arr.size();i++)
  {
	cout<<arr[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void printa(T arr[], int size)
{
  for (int i=0;i<size;i++)
  {
	cout<<arr[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void printa(vector<T> arr)
{
  for (int i=0;i<arr.size();i++)
  {
	cout<<arr[i]<<" ";
  }
  cout<<'\n';
}


// Aqui empieza mi codigo:)

const int maxN = 1002;
int m,n;
vector<pair<int, pair<int,int>>>pos;

struct node {
    int pos;
    int valor;
    int type;
};

vector<node> adj[maxN];

bool v[maxN];
bool edges[maxN][maxN];

int dfs(int u)
{
    v[u] = true;
    for(int i=0;i<adj[u].size();i++)
    {
        int val = adj[u][i].pos;
        if (!v[u] && !edges[u][i])
        {
            return 1 + dfs(u);
        }
    }
    return 1;
}


void solve()
{
    cin>>m>>n;
    int q;
    cin>>q;
    FOR(i,0,q)
    {
        int c,f,d;
        cin>>c>>f>>d;
        c--,f--;
        pos.pb({d,{f,c}});
       // print(i, f,c);

    }

    FOR(i,0,sz(pos))
    {
        FOR(j,0,sz(pos))
        {
            if (i == j)continue;
            //print("pos", pos[i].snd.snd, pos[j].snd.snd);
            int difX = abs(pos[i].snd.snd - pos[j].snd.snd);
            int difY = abs(pos[i].snd.fst - pos[j].snd.fst);

            if (pos[i].snd.snd == pos[j].snd.snd) // Mismo eje X
            {
                if (pos[i].snd.fst < pos[j].snd.fst && pos[i].fst == 3 && pos[j].fst == 1) // Este esta primero
                {
                    adj[i].pb({j,0, difY});
                    adj[j].pb({i,0, difY});
                }
                /*
                else if (pos[i].snd.fst > pos[j].snd.fst && pos[i].fst == 1 && pos[j].fst == 3)
                {
                    adj[i].pb({j,0});
                    adj[j].pb({i,0});
                }
                 */
            }
            else if (pos[i].snd.fst == pos[j].snd.fst) // Mismo eje Y
            {
                if (pos[i].snd.snd < pos[j].snd.snd && pos[i].fst == 0 && pos[j].fst == 2) // Este esta primero
                {
                    adj[i].pb({j,0,difX});
                    adj[j].pb({i,0,difX});
                }
            }
            else if (difX == difY) // Diagonal
            {
                if (pos[i].snd.snd < pos[j].snd.snd )
                {
                    if (pos[i].fst == 3 && pos[j].fst == 2)
                    {
                        adj[i].pb({j,1,difX});
                        adj[j].pb({i,1,difX});
                    }
                    else if (pos[i].fst == 1 && pos[j].fst == 2)
                    {
                        adj[i].pb({j,1,difX});
                        adj[j].pb({i,1,difX});
                    }
                }
                else if (pos[i].snd.snd > pos[j].snd.snd)
                {
                    if (pos[i].fst == 3 && pos[j].fst == 0)
                    {
                        adj[i].pb({j,1,difX});
                        adj[j].pb({i,1,difX});
                    }
                    else if (pos[i].fst == 1 && pos[j].fst == 0)
                    {
                        adj[i].pb({j,1,difX});
                        adj[j].pb({i,1,difX});
                    }
                }
            }
        }
    }


    // Ver cada vertice y quitar los menores

    ll ans = 0;
    FOR(i,0,n)
    {
        if (adj[i].empty())continue;
        ll menor = 1e16;
        int forma;
        dbg(sz(adj[i]));
        FOR(j,0,sz(adj[i]))
        {
            if (adj[i][j].type < menor)
            {
                menor = adj[i][j].type;
                forma = adj[i][j].valor;
            }
        }

        int maxi = sz(adj[i]);
        FOR(j,0,sz(adj[i]))
        {
            if (adj[i][j].type != menor){
                maxi--;
                edges[i][j] = -1;
                edges[j][i] = -1;
            }
        }

        if (maxi > 1)
        {
            ans += (maxi * menor + 1);
        }
        if (maxi == 1)
        {
            if (forma == 1)
            {
                ans += (2 * menor + 1);
            }
            else
            {
                ans += menor + 1;
            }
        }
    }

    print(ans);

    FOR(i,0,n+1)
    {
        ln
        if (!adj[i].empty())
        {
            dbg(i);
            trav(x,adj[i])
            {
                cout<<x.pos<<" ";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
	t = 1;
    while(t--)
	{
		solve();
		// ln ln
	}
    return 0;
}
