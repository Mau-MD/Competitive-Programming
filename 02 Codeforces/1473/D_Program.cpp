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
 
int num;
template<typename First, typename ... Strings>
void print(First arg, const Strings&... rest)
{
    cout<<arg<<" ";
    num++;
    print(rest...);
    num--;
    if (num == 0)cout<<'\n';
}

#define cerr(x) cout<< (#x) <<": " << (x) << endl

const int maxN = 2e5+5;

struct node {
    int menor, mayor;
};

struct segTree {

   

    vector<node>tree;
    int size;

    node merge(node a, node b)
    {
        return {min(a.menor, b.menor), max(a.mayor, b.mayor)};
    }

    void init(int n)
    {
        size =1 ;
        while(size < n)size *= 2;
        FOR(i,0,size*2)tree.pb({INT_MAX,-INT_MAX});
    }

    void build(vi& a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < sz(a))
            {
                tree[x] = {a[lx], a[lx]};
            }
            return;
        }
        int m = (lx + rx) / 2;

        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);

        tree[x] = merge(tree[2 * x + 1], tree[2 * x + 2]);

    }
    
    void build(vi& a)
    {
        build(a,0,0,size);
    }

    node querry(int l, int r, int x, int lx, int rx)
    {
        if (l >= rx || lx >= r)
        {
            return {INT_MAX, -INT_MAX};
        }

        if (lx >= l && rx <= r)
        {
            return tree[x];
        }

        int m = (lx + rx) / 2;
        node s1 = querry(l, r, 2 * x + 1, lx, m);
        node s2 = querry(l,r, 2 * x + 2, m ,rx);
        return merge(s1,s2);
    }

    node querry(int l, int r)
    {
        if (l == r)return {0,0};
        return querry(l,r,0,0,size);
    }
};



void solve()
{
    int n,q;
    cin>>n>>q;
    string a;
    cin>>a;

    vi valsIzq;

    FOR(i,0,n)
    {
        if (a[i] == '-')
        {

            if (i == 0)valsIzq.pb(-1);
            else valsIzq.pb(-1 + valsIzq[i-1]);
        }
        else if (a[i] == '+')
        {
            if (i == 0)valsIzq.pb(1);
            else valsIzq.pb(1 + valsIzq[i-1]);
        }
    }

    

    segTree stIzq;
    stIzq.init(n);
    stIzq.build(valsIzq);

   
    //trav(x,valsIzq)cout<<x<<" ";
    //cout<<'\n';
    
    FOR(i,0,q)
    {
        int l,r;
        cin>>l>>r;
        l--, r--;

        if (l == 0 && r == n-1)
        {
            cout<<1<<endl;
            continue;
        }  

        node left = stIzq.querry(0,l);
        left.mayor = max(left.mayor, 0);
        left.menor = min(left.menor, 0);
        
        if (r == n-1)
        {
            cout<<left.mayor + abs(left.menor) + 1<<endl;
            continue;
        }

        node right = stIzq.querry(r+1,n);

        if (l == 0)
        {
            int base = -valsIzq[r];


            right = {right.menor + base, right.mayor + base};
            right.menor = min(right.menor,0);
            right.mayor = max(right.mayor,0);

            cout<<right.mayor + abs(right.menor) + 1<<endl;

            continue;         
        }

        
        int base;
        base = -valsIzq[r] + valsIzq[l-1];
        right = {right.menor + base, right.mayor + base};
        node ans = {min(left.menor, right.menor), max(right.mayor, left.mayor)};
        cout<<ans.mayor + abs(ans.menor) + 1<<endl;
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--)
    {
        solve();    
    }
    return 0;
}
