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
 
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
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

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    string x;
    cin>>x;
    FOR(i,0,n)
    {
        a[i] = x[i] - '0';
    }

    if (k != 0)
    {
    FOR(i,0,n - 1)
    {
        if ((i <= n - 3) && (a[i] == 4 && a[i+1] == 4 && a[i+2] == 7) && ((i + 1) % 2 == 1)) // Ciclo
        {
            if (k % 2 == 1) // Queda como estaba
            {
                a[i] = 4, a[i+1] = 7, a[i+2] = 7;
            }
            break;
        }
        if ((i <= n - 3) && (a[i] == 4 && a[i+1] == 7 && a[i+2] == 7) && ((i + 1) % 2 == 1))  // Ciclo
        {
            if (k % 2 == 1)
            {
                a[i] = 4, a[i+1] = 4, a[i+2] = 7;
            }
            break;
        }

        else if (a[i] == 4 && a[i+1] == 7)
        {
            k--;
            if ((i + 1) % 2 == 0)
            {
                a[i] = 7;
                a[i + 1] = 7;
            }
            else
            {
                a[i] = 4;
                a[i + 1] = 4;
            }
        }

        if (k == 0)break;
    }
    }
    FOR(i,0,n)
    {
        cout<<a[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--)solve();
    return 0;
}
