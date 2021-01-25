#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int maxN = 1e9 + 2;

int main()
{
	int n;
	cin>>n;

	ll a[n], b[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}

	sort(a,a+n);
	sort(b,b+n);

	int ans = 0, act = 0;
	for (int i=0, j = 0;i<n;i++)
	{
		act++;
		while (b[j] < a[i])j++,act--;
		ans = max(act,ans);
	}
	cout<<ans;

	return 0;
}