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


// Aqui empieza mi codigo:)

struct querie {
    int type;
    int a;
    int b;
};

int n, m, Q;
const int maxN = 1e5 + 2;
int popu[maxN];
vector<querie> arista;
int group[maxN];




// Que cuente el dinero y el grupo
int findGroup(int i) {
    if (group[i] == i)return i;
    return group[i] = findGroup(group[i]);
}


void solve()
{
    // 1 index

    set<pi>aristasRestantes;

    cin>>n>>m>>Q;
    FOR(i,0,n) {
        cin>>popu[i+1];
        group[i+1] = i+1;
        // aristasRestantes.insert({i+1,i+1});
    }

    
    FOR(i,0,m) {
        int a, b;
        cin>>a>>b;
        arista.pb({a,b});
        aristasRestantes.insert({a,b});
    }

    

    vector<querie> queries;
    FOR(i,0,Q) {
        char q;
        cin>>q;
        if (q == 'P') { // Dinero
            int x,y;
            cin>>x>>y;
            queries.pb({0,x,popu[x]}); // Cuanto era antes
            popu[x] = y;
        } else { // Quitar Road
            int x;
            cin>>x;
            queries.pb({1,arista[x-1].a,arista[x-1].b});
            aristasRestantes.erase({arista[x-1].a,arista[x-1].b});
        }
    }

    reverse(all(queries));

    vi res;

    // Todo al reves
    // int mayor = -1, sizeMayor = -1;
    // FOR(i,1,n+1) {
    //     if (arista[i] > mayor) {
    //         mayor = arista[i];
    //         // sizeMayor = ??;
    //     }
    // }

    // Unir las que no se hayan eliminado
    trav(ast, aristasRestantes) {
        print(ast.fst, ast.snd);
        int groupA = findGroup(ast.fst), groupB = findGroup(ast.snd);
        group[groupA] = groupB;
        int suma = popu[groupB] + popu[groupA];
        popu[groupA] = suma;
        popu[groupB] = suma;
        // popu[groupB] += popu[groupA];

    }

    // FOR(i,1,n+1) {
    //     cout<<group[i]<<" "<<popu[i]<<endl;
    // }

    int mayor = -1;
    trav(query, queries) {
        print(query.type, query.a, query.b);

        if (query.type == 0) { // Dinero
            int groupA = findGroup(query.a);
            popu[groupA] -= (popu[query.a] - query.b);
            mayor = max(mayor, popu[groupA]);

        }
        else { // Unir
           int groupA = findGroup(query.a), groupB = findGroup(query.b);
            group[groupA] = groupB; // Ya estan unidos, pero el dinero no
            int suma = popu[groupB] + popu[groupA];
            popu[groupA] = suma;
            popu[groupB] = suma;
            // popu[groupB] += popu[groupA];
            
            // Cual es el mayor de todos
            mayor = max(mayor, max(popu[groupA], popu[groupB]));
        }   
        cout<<mayor<<" ";
    }   


    





}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; 
	// cin>>t;
	t = 1;
    while(t--)
	{
		solve();
		// ln ln
	}
    return 0;
}
