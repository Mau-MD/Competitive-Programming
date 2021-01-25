#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int maxN = 2e5 + 2;

bool inRange(int i, int j, int x)
{
	// Asegurarnos que i es mayor que 0 y j es menor que n


	if (x >= i && x <=j)return true;
	return false;
}


int n,m;
ll k, p[maxN], a[maxN];


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>n>>m>>k;
	for (int i=0;i<n;i++)
	{
		cin>>p[i];
	}

	for (int i=0;i<m;i++)
	{
		cin>>a[i];
	}

	sort(p, p + n);
	sort(a,a + m);

	/*
	for (int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<'\n';
	for(int j=0;j<m;j++)
	{
		cout<<a[j]<<" ";
	}
	*/

	int ans = 0;

	for (int i=0, j = 0;i<n;i++)
	{
		while (j < m && a[j] < p[i] - k)j++;
		if (inRange(p[i] - k ,p[i] + k, a[j]))ans++,j++;
		else continue;
	}

	cout<<ans;

	return 0;
}