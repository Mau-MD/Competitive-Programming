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
 


const int maxN = 2e5+5;

// Aqui empieza mi codigo:)

void solve()
{
    int n;
    cin>>n;

    int one = 0, two =0;
    int a[n];
    FOR(i,0,n)
    {
        int d;
        cin>>d;
        a[i] = d;
        if (d == 1)one++;
        else two++;
    }

    if (one == 0)
    {
        if (two % 2 == 0)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }

    if (two == 0)
    {
        if (one % 2 == 0)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }

    if ((2 * two + one) % 2 == 1)
    {
        cout<<"NO"<<endl;
        return;
    }

    if ((2 * two) == one)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if (two % 2 == 0 && one % 2 == 0)
    {
        cout<<"YES"<<endl;
        return;
    }

    sort(a,a+n);

    int suma = 0;
    int total = (two * 2 + one);
    int j =0;

    FOR(i,0,n)
    {
        while (j < n)
        {   
            if (suma + a[j] > total/2)break;
            if (suma + a[j] == total/2)
            {
                cout<<"YES"<<endl;
                return;
            }
            suma += a[j];
            j++;
        }

        suma -= a[i];    
    }

    cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--)solve();
    return 0;
}
