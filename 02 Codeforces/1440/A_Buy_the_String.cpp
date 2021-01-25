#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
 
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define fst first
#define snd second
 
int pct(int x) { return __builtin_popcount(x); }
 
// TO_STRING, credits: Benq
#define ts to_string
string ts(char c) { return string(1,c); }
string ts(bool b) { return b ? "true" : "false"; }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
template<class A> string ts(complex<A> c) { 
    stringstream ss; ss << c; return ss.str(); }
string ts(vector<bool> v) { 
    string res = "{"; for(int i = 0; i < sz(v); i++) res += char('0'+v[i]);
    res += "}"; return res; }
template<size_t SZ> string ts(bitset<SZ> b) {
    string res = ""; for(int i = 0; i < SZ; i++) res += char('0'+b[i]);
    return res; }
template<class A, class B> string ts(pair<A,B> p);

template<class A, class B> string ts(pair<A,B> p) {
    return "("+ts(p.first)+", "+ts(p.second)+")"; }
    
// DEBUG, credits: Benq
void DBG() {
    cerr << "]" << endl;
}

 
#ifdef LOCAL // compile with -DLOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#define optimizeIO() 0
#define openFiles() 0
#else
#define dbg(...) 0
#define optimizeIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define openFiles() freopen("file.in", "r", stdin); freopen("file.out", "w", stdout)
#endif

void solve()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    string x;
    cin>>x;

    int ans = 0;

    if (a == b)
    {
        ans = sz(x) * a;
        cout<<ans<<endl;
        return;
    }
    else if (a + c < b) // Cambiar todas a a
    {
        for (int i=0;i<sz(x);i++)
        {
            if (x[i] == '1')ans += (a + c);
            else ans += a;
        }
        cout<<ans<<endl;
        return;
    }
    else if (b + c < a)
    {
        for (int i=0;i<sz(x);i++)
        {
            if (x[i] == '0')ans += (b + c);
            else ans += b;
        }
        cout<<ans<<endl;
        return;
    }
    else
    {
        for (int i=0;i<sz(x);i++)
        {
            if (x[i] == '0')ans += a;
            else ans += b;
        }
        cout<<ans<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}