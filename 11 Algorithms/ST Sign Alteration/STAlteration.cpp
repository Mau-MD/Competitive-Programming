#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 2;
const int size = 4 * maxN;

int a[maxN];
int n;
int tree[size];

void build(int x, int lx, int rx)
{
	if (rx - lx == 1)
	{
		if (lx < n)
		{
			tree[x] = a[lx];
		}
		return;
	}

	int m = (lx + rx) / 2;

	build(2 * x + 1, lx, m);
	build(2 * x + 2, m, rx);

	tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
}

void update(int u, int v, int x, int lx, int rx)
{
	if (rx- lx == 1)
	{
		tree[x] = v;
		return;
	}

	int m = (lx + rx) / 2;

	if (u < m)
	{
		update(u,v, 2 * x + 1, lx, m);
	}
	else
	{
		update(u,v, 2 * x + 2, m ,rx);
	}
	tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
}

int querry(int l, int r, int x, int lx, int rx)
{
	if (lx >= r || l >= rx)return 0;
	if (lx >= l && rx <= r)return tree[x];

	int m = (lx + rx) / 2;

	int s1 = querry(l,r,2 * x + 1, lx ,m);
	int s2 = querry(l, r, 2 * x + 2, m, rx);

	return s1 + s2;
}


int main()
{
	cin>>n;
	cout<<"hola";
	for (int i=0;i<n;i++)
	{
		cout<<i<<" ";
		cin>>a[i];
		if (i % 2 == 1)a[i] *= -1;
		cout<<i<<endl;
	}

	cout<<"amen";
	build(0,0,4 * maxN);


	for (int i=0;i<size;i++)
	{
		cout<<tree[i]<<" ";
	}

	int m;
	cin>>m;
	while(m--)
	{
		int d; cin>>d;
		if (d == 0)
		{
			int u,v;
			cin>>u>>v;
			update(u-1,v,0,0,size);
		}
		else
		{
			int l,r;
			cin>>l>>r;
			int res = querry(l-1,r-1,0,0,size);
			if (a[l-1] < 0)res *= -1;
			cout<<res<<endl;
		}
	}

	return 0;
}