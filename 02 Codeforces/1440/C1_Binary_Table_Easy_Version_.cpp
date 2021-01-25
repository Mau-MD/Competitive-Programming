#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> now;
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


bool mat[102][102];



void change(int s, int i, int j, vector<vpi>& ans)
{
    vpi now;
    if (s == 1)
    {
        mat[i][j] = !mat[i][j];
        mat[i-1][j] = !mat[i-1][j];
        mat[i][j+1] = !mat[i][j+1];
        now.pb(make_pair(i,j));
        now.pb(make_pair(i-1,j));
        now.pb(make_pair(i,j+1));
    }
    else if (s == 2)
    {
        mat[i][j] = !mat[i][j];
        mat[i-1][j] = !mat[i-1][j];
        mat[i-1][j+1] = !mat[i-1][j+1];
        now.pb(make_pair(i,j));
        now.pb(make_pair(i-1,j));
        now.pb(make_pair(i-1,j+1));
    }
    else if (s == 3)
    {
        mat[i][j] = !mat[i][j];
        mat[i-1][j+1] = !mat[i-1][j+1];
        mat[i][j+1] = !mat[i][j+1];
        now.pb(make_pair(i,j));
        now.pb(make_pair(i-1,j+1));
        now.pb(make_pair(i,j+1));
    }
    else if (s == 4)
    {
        mat[i][j+1] = !mat[i][j+1];
        mat[i-1][j] = !mat[i-1][j];
        mat[i-1][j+1] = !mat[i-1][j+1];
        now.pb(make_pair(i,j+1));
        now.pb(make_pair(i-1,j));
        now.pb(make_pair(i-1,j+1));
    }
    ans.pb(now);
}

void imprimir(int n, int m)
{
     for (int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
           cout<<mat[i][j]<<" ";
       }
          cout<<endl;
   }
   cout<<endl;
}

void c1(int i, int j, vector<vpi>& ans)
{
    change(2,i,j,ans);
}

void c2(int i, int j, vector<vpi>& ans)
{
    change(4,i,j,ans);
}

void c3(int i, int j, vector<vpi>& ans)
{
    change(3,i,j,ans);
}

void c4(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
}

void b1(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
}

void b2(int i, int j, vector<vpi>& ans)
{
    change(3,i,j,ans);
    c2(i, j, ans);
}

void b3(int i, int j, vector<vpi>& ans)
{
    change(4,i,j,ans);
    c1(i, j, ans);
}

void b4(int i, int j, vector<vpi>& ans)
{
    change(2,i,j,ans);
    c4(i, j, ans);
}

void a1(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
    b3(i,j,ans);
}

void a2(int i, int j, vector<vpi>& ans)
{
    change(2,i,j,ans);
    b2(i, j, ans);
}

void a3(int i, int j, vector<vpi>& ans)
{
    change(3,i,j,ans);
    b4(i, j, ans);
}

void a4(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
    b2(i, j, ans);
}

void d1(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
    a2(i,j,ans);
}

void b5(int i, int j, vector<vpi>& ans)
{
    change(3,i,j,ans);
    change(2,i,j,ans);
}

void b6(int i, int j, vector<vpi>& ans)
{
    change(1,i,j,ans);
    change(4,i,j,ans);
}

bool ea1(int i, int j)
{
    if (mat[i-1][j] && !mat[i-1][j+1] && !mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool ea2(int i, int j)
{
    if (!mat[i-1][j] && mat[i-1][j+1] && !mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool ea3(int i, int j)
{
    if (!mat[i-1][j] && !mat[i-1][j+1] && mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool ea4(int i, int j)
{
    if (!mat[i-1][j] && !mat[i-1][j+1] && !mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool eb1(int i, int j)
{
    if (mat[i-1][j] && mat[i-1][j+1] && !mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool eb2(int i, int j)
{
    if (mat[i-1][j] && !mat[i-1][j+1] && mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool eb3(int i, int j)
{
    if (!mat[i-1][j] && !mat[i-1][j+1] && mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool eb4(int i, int j)
{
    if (!mat[i-1][j] && mat[i-1][j+1] && !mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool ec1(int i, int j)
{
    if (mat[i-1][j] && mat[i-1][j+1] && mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

bool ec2(int i, int j)
{
    if (mat[i-1][j] && mat[i-1][j+1] && !mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool ec3(int i, int j)
{
    if (!mat[i-1][j] && mat[i-1][j+1] && mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool ec4(int i, int j)
{
    if (mat[i-1][j] && !mat[i-1][j+1] && mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool ed1(int i, int j)
{
    if (mat[i-1][j] && mat[i-1][j+1] && mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool eb5(int i, int j)
{
    if (mat[i-1][j] && !mat[i-1][j+1] && !mat[i][j] && mat[i][j+1])return true;
    else return false;
}

bool eb6(int i, int j)
{
    if (!mat[i-1][j] && mat[i-1][j+1] && mat[i][j] && !mat[i][j+1])return true;
    else return false;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        string a; cin>>a;
        for (int j=0;j<m;j++)
        {
            if (a[j] == '1')mat[i][j] = true;
            else mat[i][j] = false;
        }
    }

    vector<vpi>ans;

    for (int j=0;j<m-2;j++)
    {
        for (int i=0;i<n;i++)
        {
            if (i == n-1 && mat[i][j])
            {
                change(3,i,j,ans);
            }
            else if (mat[i][j])
            {
                change(4,i+1,j,ans);
            }
        }
    }

    for (int i=1;i<n;i+=2)
    {
        if (ea1(i,m-2))a1(i,m-2,ans);
        if (ea2(i,m-2))a2(i,m-2,ans);
        if (ea3(i,m-2))a3(i,m-2,ans);
        if (ea4(i,m-2))a4(i,m-2,ans);

        if (eb1(i,m-2))b1(i,m-2,ans);
        if (eb2(i,m-2))b2(i,m-2,ans);
        if (eb3(i,m-2))b3(i,m-2,ans);
        if (eb4(i,m-2))b4(i,m-2,ans);
        if (eb5(i,m-2))b5(i,m-2,ans);
        if (eb6(i,m-2))b6(i,m-2,ans);


        if (ec1(i,m-2))c1(i,m-2,ans);
        if (ec2(i,m-2))c2(i,m-2,ans);
        if (ec3(i,m-2))c3(i,m-2,ans);
        if (ec4(i,m-2))c4(i,m-2,ans);

        if (ed1(i,m-2))d1(i,m-2,ans);
    }

    if(eb3(n-1,m-2))b3(n-1,m-2,ans);
    if (ea3(n-1,m-2))a3(n-1,m-2,ans);
    if (ea4(n-1,m-2))a4(n-1,m-2,ans);




    cout<<sz(ans)<<endl;
    for (auto x:ans)
    {
        for (int i=0;i<sz(x);i++)
        {
            cout<<x[i].first+1<<" "<<x[i].second+1<<" ";
        }
        cout<<endl;
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