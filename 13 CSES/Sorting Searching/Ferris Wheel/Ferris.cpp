#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
	ll n, x;
	cin>>n>>x;

	ll a[n+1]; 
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	a[n] = 0;
	sort(a,a+n);

	//for (int i=0;i<n;i++)cout<<a[i]<<" ";
	//cout<<'\n';


	int ans = 0;

	for (int i=0, j = n-1;i<n;i++)
	{
		while(a[i] + a[j] > x && j != i)j--,ans++;
		//cout<<j<<" ";
		if (i == j)
		{
			ans++;
			break;
		}
		if (a[i] + a[j] <= x)
		{
			ans++;
			j--;
			if (i == j)
			{
				break;
			}
			continue;
		}
	}

	cout<<ans;
	return 0;
}