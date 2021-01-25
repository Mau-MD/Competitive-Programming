#include <bits/stdc++.h>
using namespace std;
using ll = long long int;	
const int maxN	= 1e5 + 2;

ll p[maxN];
ll c[maxN];
ll sum[maxN];
int n;

ll acumulado(int i, int x)
{
	if (i == 0)return sum[x];
	else return sum[x] - sum[i-1];
}




int bS(int i, ll busqueda)
{
	int low = i, high = n, mid;
	while (high - low >= 1)
	{
		mid = (low + high) / 2;
		if (acumulado(i,mid) > busqueda)
		{
			high = mid;
		}
		else
		{
			low = mid;
		}
	}
	return high;
}


int main()
{
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>c[i];
	}

	for (int i=0;i<n;i++)
	{
		cin>>p[i];
	}


	for (int i=0;i<n;i++)
	{
		cout<<bS(i,c[i])<<" ";
	}

	return 0;
}