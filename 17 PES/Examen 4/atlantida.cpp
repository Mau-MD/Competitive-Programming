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

struct edge{
    int u, v, tarifa;
};

const int maxN = 1e5 + 2;
int n,m, k;
vector<edge>edges;
vector<edge>ext;
vector<edge>result;
vi adj[maxN];
int tarifas[1000][1000];
int id[maxN];
int per[maxN];

bool sortRule(edge a, edge b) {
    return a.tarifa < b.tarifa;
}

void mst() {

    FOR(i,0,n) {
        id[i] = i;
    }

    sort (all(edges), sortRule);

    int cost = 0;

    for (edge e : edges) {
        if (id[e.u] != id[e.v]) {
            cost += e.tarifa;
            result.pb(e);
        }

        int currId = id[e.u], newID = id[e.v];
        FOR(i,0,n) {
            if (id[i] == currId) {
                id[i] = newID;
            }
        }
    }
}


int dfs(int u, int price, vector<bool>v) {
    v[u] = true;
    //print(u);
    if (u == 1) return price;
    trav(next, adj[u]) {
        if (!v[next]){
            int val = dfs(next, price + tarifas[u][next], v);
            if (val != -1) 
            {
                return val;
            }
        }
    }
    return -1;
}

void toAdj() {
    for (edge e : result) {
        adj[e.u].pb(e.v);
        adj[e.v].pb(e.u);
        tarifas[e.u][e.v] = e.tarifa;
        tarifas[e.v][e.u] = e.tarifa;
    }
}

void solve()
{
    cin>>n>>m>>k;
    for (int i=0;i<m;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        edges.pb({a,b,c});
    }


    FOR(i,0,k) {
        int a,b;
        cin>>a>>b;
        ext.pb({a,b,0});
    }

    FOR(i,0,n) {
        cin>>per[i];
    }


    // Sacar arbol expansion minima sin contar extra
    mst();
    // Valor de c hasta 10 a la 6
    toAdj();
    int expansionOriginal = 0;
    for (int i=1;i<=n;i++)
    {
        vector<bool>v(maxN,false);
        expansionOriginal+=(dfs(i,0,v) *  per[i-1]);
    }
    
    FOR (i,0,maxN){
        adj[i].clear();
    }

    // Ya tengo expansion original, ahora a buscar los valores de k que tengan menor o el mismo valor original
    for (int nuevos = 0; nuevos < k; nuevos++) {
        int low = 1, high = 1e6 + 2, mid;
        while (high - low > 1) {
            mid = (low + high) / 2; // El numero k a probar
            ext[nuevos].tarifa = mid;
            edges.pb(ext[nuevos]);
            mst();
            toAdj();
            int nuevaExpansion = 0;
            for (int i=1;i<=n;i++)
            {
                vector<bool>v(maxN,false);
                nuevaExpansion+=(dfs(i,0,v) *  per[i-1]);
            }
            dbg(expansionOriginal);
            dbg(nuevaExpansion);
            if (nuevaExpansion < expansionOriginal) {
                low = mid;
            }
            else {
                high = mid;
            }
            
        }

        // low tiene el valor adecuado de k
        print(low);
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
