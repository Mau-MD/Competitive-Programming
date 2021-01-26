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

struct node
{
    ll menor;
    int ind;
};

struct segTree
{
    int size;
    vector<node> tree;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        tree.reserve(size * 2);
    }

    node merge(node a, node b)
    {
        node res;
        if (a.menor < b.menor)
        {
            res.menor = a.menor;
            res.ind = a.ind;
        }
        else
        {
            res.menor = b.menor;
            res.ind = b.ind;
        }
        return res;
    }

    void build(vl &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < sz(a))
            {
                tree[x] = {a[lx], lx};
            }
            return;
        }

        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = merge(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void build(vl &a)
    {
        build(a, 0, 0, size);
    }

    void set(int i, ll val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            tree[x] = {val, lx};
            return;
        }

        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, val, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, val, 2 * x + 2, m, rx);
        }
        tree[x] = merge(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int i, ll val)
    {
        set(i, val, 0, 0, size);
    }

    node querry(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || lx >= r)
        {
            return {LLONG_MAX, -1};
        }
        if (lx >= l && rx <= r)
            return tree[x];

        int m = (lx + rx) / 2;
        node s1 = querry(l, r, 2 * x + 1, lx, m);
        node s2 = querry(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }

    node querry(int l, int r)
    {
        return querry(l, r, 0, 0, size);
    }
};

// Aqui empieza mi codigo:)

void solve()
{
    int n, m;
    cin >> n >> m;

    vl k(n);
    FOR(i, 0, n)
    {
        cin >> k[i];
    }

    vl p(m);
    FOR(i, 0, m)
    {
        cin >> p[i];
    }

    segTree st;
    st.init(m);
    st.build(p);

    vpl ord(n);
    FOR(i, 0, n)
    {
        ord[i] = {p[k[i] - 1], k[i]};
    }

    sort(all(ord));
    reverse(all(ord));

    ll ans = 0;
    FOR(i,0,sz(ord))
    {
        node minn = st.querry(0,ord[i].snd);
        if (minn.menor < ord[i].fst)
        {
            ans+=minn.menor;
            st.set(minn.ind, LLONG_MAX);
        }
        else
        {
            ans+=ord[i].fst;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1
    while (t--)
    {
        solve();
        // ln ln
    }
    return 0;
}
