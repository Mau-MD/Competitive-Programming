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
const int maxN = 1e5 + 2;
ll sameLetter[maxN];

void precalc()
{
    sameLetter[2] = 1LL, sameLetter[3] = 2LL, sameLetter[4] = 2LL;
    FOR(i,5,maxN)
    {
        ll ind = i - 1LL;
        ll mult = ind / 3LL;
        ll rest = ind % 3;
        sameLetter[i] = 2LL * mult + rest;
    }
}
void solve()
{
    string a;
    cin>>a;

    ll res = 0;
    int same = 1;    

    if (sz(a) == 1)
    {
        print(0);
        return;
    }

    bool v[sz(a)];
    FOR(i,0,sz(a))v[i]=false;

    FOR(i,1,sz(a))
    {
        if (a[i] == a[i-1])same++;
        else 
        {
            if (same != 1)
            {
                res += sameLetter[same];
                for(int j = i; j >= i - (same - 1); j--)
                {
                    v[j] = true;
                }
            }
            same = 1;
        }    
    }

    if (same > 1)res += sameLetter[same];

    FOR(i,0,sz(a) - 2)
    {   
        if (v[i])continue;
        if (a[i] == a[i+2])res++;
    }

    print(res);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    precalc();
    int t; 
	cin>>t;
	// t = 1 
    while(t--)
	{
		solve();
		// ln ln
	}
    return 0;
}
