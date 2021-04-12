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

const int maxN = 2e5 + 2;
vi adj[maxN];
int color[maxN][maxN];

bool v1[maxN], v2[maxN];

bool dfs1(int u, int target)
{

  if (u == target)return 1;
  v1[u] = true;
  for (int i=0;i<adj[u].size();i++)
  {
    int val = adj[u][i];
    if (color[u][i] != 2 && !v1[val])
    {
      if(dfs1(val,target))
      {
        return 1;
      }
    }
  }
  return 0;
}

bool dfs2(int u, int target)
{

  if (u == target)return 1;
  v2[u] = true;
  for (int i=0;i<adj[u].size();i++)
  {
    int val = adj[u][i];
    if (color[u][i] != 1 && !v2[val])
    {
      if(dfs2(val,target))
      {
        return 1;
      }
    }
  }
  return 0;
}
void solve()
{
  int n;
  cin>>n;
  int inita, initb;
  cin>>inita>>initb;

  FOR(i,0,n-1)
  {
    int a,b;
    cin>>a>>b;  
    adj[a].pb(b);
    adj[b].pb(a);
    string x; 
    cin>>x;
    if (x == "magenta")color[a][b] = 3, color[b][a] = 3;
    else if (x == "plava")color[a][b] = 2, color[b][a] = 2;
    else color[a][b] = 1, color[b][a] = 1;
  }

  bool s1 = dfs1(initb, inita); // El wey
  bool s2 = dfs2(inita,initb);

  if (s1 && !s2)print("Marin");
  else if (s1 && !s2)print("Paula");
  else if (!s1 && !s2)print("Draw");


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;

    // t = 1
    while(t--)
    {
        solve();
        // ln ln
    }
    return 0;
}
