/*
	Made by Mau:D
*/

#include <bits/stdc++.h>

using namespace std;


using ll = long long int;
using ld = long double;
using db = double; 
using str = string; // yay python!
 
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
 
// pairs
#define mp make_pair
#define fst first
#define snd second
 
// vectors
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
 
// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
 
// constants
int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18; // not too close to LLONG_MAX
const ld PI = acos((ld)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count()); 
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
 
// helper functions
constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x) { return 31-__builtin_clz(x); } // floor(log2(x)) 
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down
 

 
// Aqui empieza mi codigo:)

const int maxN = 1e5 + 2;
int n;
ll bit[4 * maxN];

void update(int x, ll val)
{
    x++;
    while(x<=n)
    {   
        bit[x] += val;
        x += (x & -x);
    }
}

ll querry(int x)
{
    ll res = 0;
    x++;
    while (x>0)
    {
        res += bit[x];
        x -= (x & -x);
    }
    return res;
}

ll rangeSum(int x, bool direction)
{
    if (direction) // right
    {
        return querry(n-1) - querry(x);
    }
    else
    {
        return querry(x);
    }
}


void solve()
{
    
    string s;
    cin>>s;
    n = s.size();
    ll a,b;
    cin>>a>>b;
    ll ar[n];

    ll signos = 0;
    for (int i=0;i<n;i++)
    {
        if (s[i] == '0')ar[i] = 0;
        else if(s[i] == '1') ar[i] = 1;
        else ar[i] = 0, signos++;
        update(i,ar[i]);
    }

    /*
    if (a == b)
    {
        ll nUno = 0, nCero = 0;
        FOR(i,0,n)
        {
            if (s[i] == '1')nUno++;
            else if (s[i] == '0')nCero++;
        }

        if (nUno > nCero)
        {
            FOR(i,0,n)
            {
                if (s[i] == '?')s[i] = '1';
            }
        }
        else
        {
            FOR(i,0,n)
            {
                if (s[i] == '?')s[i] = '0';
            }
        }
        
        // Los signos de interrogacion los cuenta como un cero, pero no deberia de ser asi

        int ans = 0; 
        FOR(i,0,n)
        {
            ll nUnoDerecha = rangeSum(i,1), nUnoIzquierda = rangeSum(i,0);  
            ll nCeroDerecha = (n - i - 1) - nUnoDerecha, nCeroIzquierda = i - nUnoIzquierda;

            if (s[i] == '1')
            {
                ans += (nCeroDerecha * b);
            }
            else
            {
                ans += (nUnoDerecha * a);
            }
        }

        cout<<ans<<endl;
        return;
    }
    */

    ll ans = 0;
    FOR(i,0,n)
    {
        if (s[i] == '?')
        {
            ll nUnoDerecha = rangeSum(i,1), nUnoIzquierda = rangeSum(i,0);  
            ll nCeroDerecha = (n - i - 1) - nUnoDerecha - signos, nCeroIzquierda = i - nUnoIzquierda;

            /*
            cout<<"1: "<<nUnoDerecha<<" "<<nUnoIzquierda<<endl;
            cout<<"0: "<<nCeroDerecha<<" "<<nCeroIzquierda<<endl;
            */

            if ((b * nCeroDerecha) + (a * nCeroIzquierda) < (b * nUnoIzquierda) + (a * nUnoDerecha)) // Ponemos 1
            {
                update(i,1);
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
            signos--;
        }
    }

    FOR(i,0,n)
    {
        ll nUnoDerecha = rangeSum(i,1);
        ll nCeroDerecha = (n - i - 1LL) - nUnoDerecha;

        if (s[i] == '1')
        {
            ans += (nCeroDerecha * b);
        }
        else
        {
            ans += (nUnoDerecha * a);
        }
    }
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--)solve();
    return 0;
}
