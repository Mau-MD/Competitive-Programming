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

struct node{
    ll minn;
    vl pos;
};

struct segTree {

    vector<node>tree;
    int size;

    node merge(node a, node b)
    {
        node newNode;
        if (a.minn == b.minn) {

            newNode.minn = a.minn;
            newNode.pos = a.pos;
            newNode.pos.insert(newNode.pos.end(),b.pos.begin(),b.pos.end());
        }
        else if (a.minn < b.minn)
        {
            newNode.minn = a.minn;
            newNode.pos = a.pos;
        }
        else
        {
            newNode.minn = b.minn;
            newNode.pos = b.pos;
        }
        return newNode;
    }

    void init(int n){
        size = 1;
        while(size < n)size *= 2;
        tree.reserve(size * 2);
    }

    void build(vl&a, int x, int lx, int rx) {
        if (rx - lx == 1){

            if (lx < a.size())
            {
                vl temp;
                temp.pb(lx);
                tree[x] = {a[lx], temp};
            }

            return;
        }

        int m = (lx + rx) / 2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);

        tree[x] = merge(tree[2*x+1],tree[2*x+2]);
    }

    void build(vl& a) {
        build(a,0,0,size);
    }

    node query(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || lx >= r)
        {
            vl a;
            return {(ll) 1e10,a};
        }
        if (lx >= l && rx <= r)
        {
            return tree[x];
        }
        int m = (lx + rx) / 2;
        node s1 = query(l,r,2*x+1,lx,m);
        node s2 = query(l,r,2*x+2,m,rx);

        return merge(s1,s2);
    }

    node query(int l,int r)
    {
        return query(l,r,0,0,size);
    }

};

segTree seg;

// Aqui empieza mi codigo:)
int get(int lx, int rx)
{
    if (lx == rx)return 1;

    node ans = seg.query(lx,rx+1);
    sort(all(ans.pos));

    int l=lx-1,r=ans.pos[0];
    int res = 0;
    if (r - l != 1)
    {
        res += get(l+1,r-1);
    }
    for(int i =0; i < sz(ans.pos) - 1; i++)
    {
        l = ans.pos[i];
        r = ans.pos[i+1];
        if (r - l == 1)continue;
        res += get(l+1,r-1);
    }

    l = ans.pos[sz(ans.pos)-1], r = rx + 1;
    if (r - l != 1)
    {
        res +=  get(l+1,r-1);
    }

    return 1 + res;
}


void solve()
{
    int n;
    cin>>n;
    vl a(n);
    bool ok = false;
    FOR(i,0,n)
    {
        cin>>a[i];
        if (a[i] == 0)ok = true;
    }

    seg.init(n);
    seg.build(a);

    node ans = seg.query(0,n);
    sort(all(ans.pos));

    int res = 0;
    int l=-1,r=ans.pos[0];
    if (r != 0)
    {
        res += get(0,r-1);
    }
    //dbg(res);
    for(int i =0; i < sz(ans.pos) - 1; i++)
    {
        l = ans.pos[i];
        r = ans.pos[i+1];
        if (r - l == 1)continue;
        res += get(l+1,r-1);
    }
    //dbg(res);
    l = ans.pos[sz(ans.pos)-1], r = n;
    if (r - l != 1)
    {
        res += get(l+1,r-1);
    }
    //dbg(res);
    if (ok)print(res);
    else print(res+1);
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
