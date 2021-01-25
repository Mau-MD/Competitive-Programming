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
#define f first
#define s second
 
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
 

bool isInterval(int a, int b, int c, int d)
{
    int minn = min(a,c);
    int maxx = max(b,d);
    if (minn <= maxx)return false;
    return true;
}
 
// Aqui empieza mi codigo:)
void solve ()
{
    int n,k;
    cin>>n>>k;
    int h[n];
    FOR(i,0,n)
    {
        cin>>h[i];
    }

    int ldown = h[0], lup = h[0] + k; // Min & Max
    FOR(i,1,n-1)
    {
        int down = h[i];
        int up = h[i] + 2 * k - 1;

        if (!isInterval(lup, ldown, up, down))
        {
            cout<<"NO\n";
            return;
        }
        // ajustar
        
        up = min(up, lup - 1 + k);
        down = max(down, ldown + 1 - k);

        lup = up;
        ldown = down;
    }

    int down =  h[n-1];
    int up = h[n-1] + k;

    if (!isInterval(lup, ldown, up, down))
        {
            cout<<"NO\n";
            return;
        }
    
    //cout<<"up: "<<up<<" down: "<<down<<endl;
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--)solve();
    return 0;
}
