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
void print(First argument, const Strings &...rest)
{
    cout << argument << " ";
    print(rest...);
}

template <typename T>
void dbga(string nombre, T codeInfo[], int size)
{
    cout << '[' << nombre << "]: ";
    for (int i = 0; i < size; i++)
    {
        cout << codeInfo[i] << " ";
    }
    cout << '\n';
}

template <typename T>
void dbga(string nombre, vector<T> codeInfo)
{
    cout << '[' << nombre << "]: ";
    for (int i = 0; i < codeInfo.size(); i++)
    {
        cout << codeInfo[i] << " ";
    }
    cout << '\n';
}

template <typename T>
void printa(T codeInfo[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << codeInfo[i] << " ";
    }
    cout << '\n';
}

template <typename T>
void printa(vector<T> codeInfo)
{
    for (int i = 0; i < codeInfo.size(); i++)
    {
        cout << codeInfo[i] << " ";
    }
    cout << '\n';
}

// Aqui empieza mi codigo:)

int n, t;

const int maxN = 1002;

struct node
{
    ll score;
    ll decRate;
    int timeToSolve;
};

vector<node> codeInfo;

bool test4Sort(node a, node b)
{
    return a.decRate < b.decRate;
}

ll getPoints(int points, int time, int frec)
{
    return max(0, points - time * frec);
}


ll getRes(int time, int count, vector<bool>taken)
{
    if (count >= n || time >= t) return 0;
    ll ans = 0;
    FOR(i, 0, n)
    {
        if (taken[i] || codeInfo[i].timeToSolve + time > t || count + 1 >= n)continue;
        taken[i] = true;
        ll newAns = getPoints(codeInfo[i].score, time + codeInfo[i].timeToSolve, codeInfo[i].decRate) + getRes(time + codeInfo[i].timeToSolve, count + 1, taken);
        taken[i] = false;
        ans = max(ans, newAns);
    }
    return ans;
}

void solve()
{
    cin >> n >> t;

    bool testCase4 = true;
    int lastA = -1;
    FOR(i, 0, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        codeInfo.pb({a, b, c});

        // Checamos caso 4
        if (c != 1 || lastA == -1 ? false : a != lastA)
            testCase4 = false;
        lastA = a;
    }
    vector<bool>taken(maxN);
    cout<<getRes(0, 0, taken);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
        // ln ln
    }
    return 0;
}
