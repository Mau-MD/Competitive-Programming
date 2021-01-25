#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<ll,ll> pii;

int main()
{
	int n;
	cin>>n;
	vector<pii>a;

	for (int i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		a.push_back({y,x});
	}

	sort(a.begin(),a.end());

	ll ans = 0, last = 0;
	for (int i=0;i<n;i++)
	{
		if (a[i].second >= last)
		{
			ans++;
			last = a[i].first;
		}
	}
	cout<<ans;

	return 0;
}