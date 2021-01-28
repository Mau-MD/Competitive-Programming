/*
  Made by Mau:D
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
using ld = long double;
using db = double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

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
#define ln cout << '\n';

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

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define arr array

int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld PI = acos((ld)-1);
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;

constexpr int pct(int x) { return __builtin_popcount(x); }     // # of bits set
constexpr int bits(int x) { return 31 - __builtin_clz(x); }    // floor(log2(x))
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

// Debug

void print()
{
  cout << '\n';
}

template <typename First, typename... Strings>
void print(First argument, const Strings &... rest)
{
  cout << argument << " ";
  print(rest...);
}

template <typename T>
void dbga(string nombre, T arr[], int size)
{
  cout << '[' << nombre << "]: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

template <typename T>
void dbga(string nombre, vector<T> arr)
{
  cout << '[' << nombre << "]: ";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

template <typename T>
void printa(T arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

template <typename T>
void printa(vector<T> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

// Aqui empieza mi codigo:)

struct segTree
{ // Max
  int size;
  vi tree;
  vi lazy;

  void init(int n)
  {
    size = 1;
    while (size < n)
      size *= 2;
    tree.assign(size * 2, 0);
    lazy.assign(size * 2, 0);
  }

  void build(vi &a, int x, int lx, int rx)
  {
    if (rx - lx == 1)
    {
      if (lx < sz(a))
      {
        tree[x] = a[lx];
      }
      return;
    }

    int m = (lx + rx) / 2;
    build(a, 2 * x + 1, lx, m);
    build(a, 2 * x + 2, m, rx);
    tree[x] = max(tree[2 * x + 1], tree[2 * x + 2]);
  }

  void build(vi &a)
  {
    build(a, 0, 0, size);
  }

  void set(int l, int r, int val, int x, int lx, int rx)
  {
    if (lazy[x] != 0)
    {
      tree[x] += lazy[x];
      if (rx - lx != 1)
      {
        lazy[2 * x + 1] = lazy[x];
        lazy[2 * x + 2] = lazy[x];
      }
      lazy[x] = 0;
    }

    if (lx >= r || l >= rx)
      return;

    if (lx >= l && rx <= r)
    {
      tree[x] += val;
      if (rx - lx != 1)
      {
        lazy[2 * x + 1] += val;
        lazy[2 * x + 2] += val;
      }
      return;
    }
    int m = (lx + rx) / 2;
    set(l, r, val, 2 * x + 1, lx, m);
    set(l, r, val, 2 * x + 2, m, rx);

    tree[x] = max(tree[2 * x + 1], tree[2 * x + 2]);
  }

  void set(int l, int r, int val)
  {
    set(l, r, val, 0, 0, size);
  }

  int query(int l, int r, int x, int lx, int rx)
  {
    if (lazy[x] != 0)
    {
      tree[x] += lazy[x];
      if (rx - lx != -1)
      {
        lazy[2 * x + 1] = lazy[x];
        lazy[2 * x + 2] = lazy[x];
      }
      lazy[x] = 0;
    }

    if (lx >= r || l >= rx)
      return -1;
    if (lx >= l && rx <= r)
    {
      return tree[x];
    }
    int m = (lx + rx) / 2;
    int s1 = query(l, r, 2 * x + 1, lx, m);
    int s2 = query(l, r, 2 * x + 2, m, rx);
    return max(s1, s2);
  }

  int query(int l, int r)
  {
    return query(l, r, 0, 0, size);
  }
};


const int maxN = 2e5 + 2;
int mapp[maxN];

int n,k,a;

bool can(int turn){
  int count  =0;
  int barcos = 0;
  // 1
  FOR(i,1,n+1)
  {
    if (mapp[i] == 0)count++;  
    else if (mapp[i] != 0)
    {
      if (mapp[i] > turn)
      {
        count++;
      }
      else
      {
        count = 0;
      }
    }
    if (count == a)
    {
      i++;
      barcos++;
      count = 0;
    }
  }
  //dbg(barcos);
  if (barcos >= k)return true;
  else return false;
}

void solve()
{

  cin >> n >> k >> a;
  int m;
  cin >> m;
 

  FOR(i,0,m)
  {
    int d; cin>>d;
    mapp[d] = i + 1;
  }

  // True = no miente
  int low = 1, high = m, mid;
  while(high - low > 1)
  {
    mid = (low + high) / 2;
    if (can(mid))
    {
      //print("no");
      low = mid;
    }
    else
    {
      //print("si");
      high = mid;
    }
  }
  
  //print(low,high);
  if (can(low) && can(high))print(-1);
  else if (!can(low) && !can(high))print(low);
  else print(high);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;

  t = 1;
  while (t--)
  {
    solve();
    // ln ln
  }
  return 0;
}
