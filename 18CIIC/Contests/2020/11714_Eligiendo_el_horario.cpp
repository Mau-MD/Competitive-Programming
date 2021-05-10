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
void dbga(string nombre, T codeInfo[], int size)
{
  cout<<'['<<nombre<<"]: ";
  for (int i=0;i<size;i++)
  {
	cout<<codeInfo[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void dbga(string nombre, vector<T> codeInfo)
{
  cout<<'['<<nombre<<"]: ";
  for (int i=0;i<codeInfo.size();i++)
  {
	cout<<codeInfo[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void printa(T codeInfo[], int size)
{
  for (int i=0;i<size;i++)
  {
	cout<<codeInfo[i]<<" ";
  }
  cout<<'\n';
}

template<typename T>
void printa(vector<T> codeInfo)
{
  for (int i=0;i<codeInfo.size();i++)
  {
	cout<<codeInfo[i]<<" ";
  }
  cout<<'\n';
}


// Aqui empieza mi codigo:)

const int maxN = 2e5 + 2;
int n,m,l;
vl adj[maxN];

struct node {
    ll time;
    ll first;
    ll interval;
};

map<pair<int,int>, node> timeData;

// time tiene el tiempo actual
ll getTime(int actual, ll time, int padre) {

    if (actual == n-1)return 0;
    // Buscar por todos sus vecinos
    ll ans = 9999999999999;
    for (int i=0;i<sz(adj[actual]);i++) {
        if (actual == padre)continue;
        int next = adj[actual][i];
        node currData = timeData[mp(actual, next)]; // El dato de la siguiente linea
        ll val, timeToArrive;
        if (time > currData.first) {
            timeToArrive = (time - currData.first) % currData.interval; 
            val = getTime(next, time + timeToArrive, actual) + timeToArrive;
        }
        else {
            timeToArrive = currData.first - time;
            val = getTime(next, time + timeToArrive, actual) + timeToArrive;
        }
        ans = min(ans, val);
    }
    return ans;
}

void solve()
{
    cin>>n>>m>>l;
    FOR(i, 0, n) {
        int a, b;
        ll time, first, interval;
        cin>>a>>b>>time>>first>>interval;
        adj[a].pb(b);
        adj[b].pb(a);
        timeData[{a,b}] = {time, first, interval};
        timeData[{b,a}] = {time, first, interval};

    }

    print(getTime(0, 0, -1));

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; 
	// cin>>t;
	t = 1;
    while(t--)
	{
		solve();
		// ln ln
	}
    return 0;
}
