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
 
#define rep(i,a,b) for (int i = (a); i < (b); ++i)
#define per(i,a,b) for (int i = (b)-1; i >= (a); --i)
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

int gcd(int a, int b)
{
    while(b) {a %= b; swap(a,b);}
    return a;
}


void solve()
{
    string a,b;
    cin>>a>>b;

    if (b.size() > a.size())
    {
        string c = b;
        b = a;
        a = c;
    }
    
    bool ok = false;
    rep(i,0,a.size())
    {
        int index = (i+1) % b.size();
        if (index == 0)index = b.size()-1;
        else index--;
        //cout<<b[index]<<" "<<a[i]<<endl;
        if (b[index] != a[i])ok = true;
    }

    // checar si mism aletra
    bool repetido = true;
    string aux = a + b;
    rep(i,1,aux.size())
    {
        if (aux[i] != aux[i-1])repetido = false;
    }


    // si ok = false, entonces aseguramos que contiene todas
    if (!repetido && gcd(a.size(),b.size()) == 1)
    {
        cout<<-1<<endl;
        return;
    }

    if (a.size() % b.size() == 0 && !ok)
    {
        cout<<a<<endl;
    }
    else if (!ok)
    {
        int mult = a.size() * b.size() / gcd(a.size(),b.size());
        string res;
        while (res.size() < mult)
        {
            res += b;
        }
        cout<<res<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--)solve();
    return 0;
}
