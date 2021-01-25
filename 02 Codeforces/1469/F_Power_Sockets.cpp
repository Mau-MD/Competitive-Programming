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
 
#define rep(i,a,b) for (int i = (a); i < (b); ++i)
#define per(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define trav(a,x) for (auto& a: x)
 
int MOD = 1e9+7; 
const ll INF = 1e18; 
const ld PI = acos((ld)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; 
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
 
constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x) { return 31-__builtin_clz(x); } // floor(log2(x)) 
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down
 


const int maxN = 2e5+5;

// Aqui empieza mi codigo:)

struct segTree // Primero mayor
{

    vi tree,lazy;

    int size;


    void init(int n)
    {
        size = 1;
        while(size < n)size *= 2;
        tree.assign(size * 2, 0);
        lazy.assign(size * 2, 0);
    }

    void build(vi& a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < sz(a))
            {
                tree[x] = a[lx];
            }
            return;
        }

        int m = (lx + rx) /2 ;
        build(a,2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void build(vi&a)
    {
        build(a,0,0,size);
    }

    void set(int i, int val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            tree[i] = val;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i,val,2 * x + 1, lx, m);
        }
        else
        {
            set(i,val, 2 * x + 2, m, rx);
        }

        tree[x] = tree[2 * x +1] + tree[2 * x + 2];
    }

    void set(int i, int val)
    {
        set(i,val,0,0,size);
    }

    // Como si estuviera haciendo querry
    void setRange(int l, int r, int val, int x, int lx, int rx)
    {  
        // Update pending
        if (lazy[x] != 0)
        {
            tree[x] += (rx - lx) * lazy[x];
            if (rx - lx != 1)
            {
                lazy[2 * x + 1] += lazy[x];
                lazy[2 * x + 2] += lazy[x];
            }
            lazy[x] = 0;
        }


        if (lx > r || l > rx)return;

        if (lx >= l && rx <= r) // Full
        {
            tree[x] += (rx - lx) * val;
            if (rx - lx != 1)
            {
                lazy[2 * x + 1] += val;
                lazy[2 * x + 2] += val;
            }
            return;
        }

        int m = (lx + rx) / 2;
        setRange(l,r,val,2 * x + 1, lx, m);
        setRange(l,r,val, 2 * x + 2, m, rx);
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }

    void setRange(int l, int r, int val)
    {
        setRange(l,r,val,0,0,size);
    }

    void push(int x, int lx, int rx)
    {
        if (lazy[x] != 0)
        {
            tree[x] += (rx - lx) * lazy[x];
            if (rx - lx != 1)
            {
                lazy[2 * x + 1] += lazy[x];
                lazy[2 * x + 2] += lazy[x];
            }
            lazy[x] = 0;
        }
    }

    int primeroMayor(int val, int x, int lx, int rx, int anterior)
    {

        push(x,lx,rx);
        if (rx - lx == 1)return lx;

        int m = (rx + lx) / 2;
        push(2 * x + 1, lx, m);

        int izq = tree[2 * x + 1];
        

        if (izq + anterior < val)
        {
            return primeroMayor(val, 2 * x + 2, m ,rx, anterior + izq);
        }
        else
        {
            return primeroMayor(val, 2 * x + 1, lx, m, anterior);
        }
    }

    int primeroMayor(int val)
    {
        return primeroMayor(val,0,0,size,0);
    }

};

void solve()
{
    int n,k;
    cin>>n>>k;
    vi lon;
    vi
    rep(i,0,n) // Longitudes
    {
        int d; cin>>d;
        lon.pb(d);
    }
    sor(lon);
    reverse(all(lon));

    // Mayor;
    segTree st;
    st.init(maxN);


    trav(x,lon)
    {
        // El primer cero;

        // Agregar una cadena
        int izq, der;
        if (x % 2 == 0) // [)
        {
            izq = x / 2 - 1; // +2 en todas;
            der = izq + 1; // +1 solo en este
            st.setRange(1,izq + 1, 2);

        }
        else
        {
            izq = x / 2 + 1; // +2 en todas
            st.setRange(1,izq + 1, 2);
        }


    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--)solve();
    return 0;
}
