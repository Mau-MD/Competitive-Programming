#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin>>n>>m;

	multiset <int,greater<int>> a;


	for (int i=0;i<n;i++)
	{
		int d; cin>>d;
		a.insert(d);
	}


	for (int i=0;i<m;i++)
	{
		int d; cin>>d;
		auto x = a.lower_bound(d);
		if (x == a.end())cout<<-1<<endl;
		else 
		{
			cout<<*x<<endl;
			a.erase(x);
		}
	}


	return 0;
}