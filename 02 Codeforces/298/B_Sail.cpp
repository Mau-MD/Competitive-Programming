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
int t, x1, y_1, x2, y2;

int distancia(int x, int y)
{
    int distancia = abs(y2 - y) + abs(x2 - x);
    return distancia;
}

void solve()
{
    cin>>t>>x1>>y_1>>x2>>y2;
    string a;
    cin>>a;

    int nowX = x1, nowY = y_1;

    if (nowX == x2 && nowY == y2)
    {
        cout<<0<<endl;
        return; 
    }

    FOR(i,1,a.size() + 1)
    {
        char x = a[i-1];
        //cout<<nowY<<" "<<nowX<<endl;
        
        if (x == 'S')
        {   
            //cout<<distancia(nowX,nowY - 1)<<" "<<distancia(nowX, nowY)<<endl;
            if (distancia(nowX,nowY - 1) < distancia(nowX, nowY))
            {
                nowY--;
            }
        }
        else if (x == 'N')
        {
            if (distancia(nowX,nowY + 1) < distancia(nowX, nowY))
            {
                nowY++;
            }
        }
        else if (x == 'E')
        {
            if (distancia(nowX+1,nowY) < distancia(nowX, nowY))
            {
                nowX++;
            }
        }
        else if (x == 'W')
        {
            if (distancia(nowX-1,nowY) < distancia(nowX, nowY))
            {
                nowX--;
            }
        }

        if (nowX == x2 && nowY == y2)
        {
            cout<<i<<endl;
            return; 
        }
    }
    cout<<-1<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; 
    while(t--)solve();
    return 0;
}
